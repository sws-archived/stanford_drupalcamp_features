<?php
/**
 * @file
 * stanford_drupalcamp_sessions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function stanford_drupalcamp_sessions_default_rules_configuration() {
  $items = array();
  $items['rules_send_email_to_session_proposer'] = entity_import('rules_config', '{ "rules_send_email_to_session_proposer" : {
      "LABEL" : "Send Email to Session Proposer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "sessions" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--stanford_session" : { "bundle" : "stanford_session" } },
      "DO" : [
        { "mail" : {
            "to" : [ "site:current-user:mail" ],
            "subject" : "Thank you for your \\u0022[node:title]\\u0022 session submission for Stanford Drupal Camp!",
            "message" : "Hi,\\r\\n\\r\\nThanks for proposing the \\u0022[node:title]\\u0022 session at Stanford Drupal Camp!\\r\\n\\r\\nYou can view and edit your session proposal at: [node:url]\\r\\n\\r\\nWe will be reviewing sessions in mid-March, and will contact you if your session is approved.\\r\\n\\r\\nThanks, and we look forward to seeing you at Stanford Drupal Camp!\\r\\n\\r\\n-The Stanford Drupal Camp Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
