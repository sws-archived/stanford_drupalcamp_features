<?php
/**
 * @file
 * stanford_drupalcamp_sponsors.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_drupalcamp_sponsors_taxonomy_default_vocabularies() {
  return array(
    'sponsorship_level' => array(
      'name' => 'Sponsorship Level',
      'machine_name' => 'sponsorship_level',
      'description' => 'E.g., Gold, Silver, Bronze',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
