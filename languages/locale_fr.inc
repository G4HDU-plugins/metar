<?php
/*
 * This file holds the French translation of PHP Weather. To use it,
 * just include it in the main phpweather.inc file.
 *
 * Author: Antoine Bajolet <antoine.bajolet@free.fr>
 */

/* Unsets old language variables and loads new ones. */
if (isset($strings)) {
  /* The strings array is loaded - assume the same for the rest. */
  unset($strings);
  unset($wind_dir_text_short_array);
  unset($wind_dir_text_array);
  unset($weather_array);
  unset($cloud_condition_array);
}
/* Load the new strings */

$strings = array(
  'no_data'               => '<blockquote><p>D&eacute;sol&eacute;, aucune donn&eacute;e n\'est disponible pour %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> pouces',
  'precip_a_trace'        => 'une trace',
  'precip_there_was'      => 'Il y a eu %s de pr&eacute;cipitations ',
  'sky_str_format1'       => 'Il y avait <b>%s</b> � une altitude de <b>%s</b> m�tres (<b>%s</b> pieds)',
  'sky_str_clear'         => 'Le ciel &eacute;tait <b>clair</b>',
  'sky_str_format2'       => ', <b>%s</b> � une altitude de <b>%s</b> m�tres (<b>%s</b> pieds) et <b>%s</b> � une altitude de <b>%s</b> m�tres (<b>%s</b> pieds)',
  'sky_str_format3'       => ' et <b>%s</b> � une altitude de <b>%s</b> m�tres (<b>%s</b> pieds)',
  'sky_cavok'             => 'There are no clouds below <b>1,524</b> meter (<b>5,000</b> feet)',
  'clouds'                => ' nuages',
  'clouds_cb'             => ' cumulonimbus',
  'clouds_tcu'            => ' cumulus &eacute;lev&eacute;s',
  'visibility_format'     => 'La visibilit&eacute; &eacute;tait <b>%s</b> kilom�tres (<b>%s</b> miles).',
  'wind_str_format1'      => 'avait une vitesse de <b>%s</b> m�tres par seconde (<b>%s</b> milles par heure)',
  'wind_str_format2'      => ", avec rafales jusqu'� <b>%s</b> m�tres par seconde (<b>%s</b> milles par heure),",
  'wind_str_format3'      => ' depuis le <b>%s</b>',
  'wind_str_calm'         => '<b>calme</b>',
  'wind_vrb_long'         => 'variable directions',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' the windchill was <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'au cours de la derni�re heure. ',
  'precip_last_6_hours'   => 'au cours des 3 � 6 derni�res heures. ',
  'precip_last_24_hours'  => 'au cours des derni�res 24 heures. ',
  'precip_snow'           => 'Il y a une &eacute;paisseur de <b>%s</b> mm (<b>%s</b> inches) de neige au sol. ',
  'temp_min_max_6_hours'  => 'Les temp&eacute;ratures maximales et minimales pour les 6 derni�res heures &eacute;taient de <b>%s</b> et <b>%s</b>&nbsp;&deg;C (<b>%s</b> et <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'La temp&eacute;rature maximale pour les 6 derni�res heures &eacute;tait de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'La temp&eacute;rature minimale pour les 6 derni�res heures &eacute;tait de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'Les temp&eacute;ratures maximales et minimales pour les derni�res 24 heures &eacute;taient de <b>%s</b> et <b>%s</b>&nbsp;&deg;C (<b>%s</b> et <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'The visibility for runway <b>%s</b> is <b>%s</b> meters (<b>%s</b> feet).',
  'runway_vis_min_max'    => 'The visibility for runway <b>%s</b> varies between <b>%s</b> meters (<b>%s</b> feet) and <b>%s</b> meters (<b>%s</b> feet).',
  'light'                 => 'L&eacute;ger ',
  'moderate'              => 'Mod&eacute;r&eacute; ',
  'Heavy'                 => 'Fort ',
  'nearby'                => 'Proche de ',
  'current_weather'       => 'La m&eacute;t&eacute;o actuelle est <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p>Il y a <b>%s</b> minutes, � <b>%s</b> UTC, le vent %s � %s. La temp&eacute;rature &eacute;tait de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s et la pression atmosph&eacute;rique &eacute;tait de <b>%s</b> hPa (<b>%s</b> inHg). Il y avait une humidit&eacute; relative de <b>%s%%</b>. %s %s %s %s %s</p></blockquote>'
 );

$wind_dir_text_short_array = array(
  'N',
  'N/NE',
  'NE',
  'E/NE',
  'E',
  'E/SE',
  'SE',
  'S/SE',
  'S',
  'S/SO',
  'SO',
  'O/SO',
  'O',
  'O/NO',
  'NO',
  'N/NO',
  'N');

$wind_dir_text_array = array(
  'Nord',
  'Nord/Nord-Est',
  'Nord-Est',
  'Est/Nord-Est',
  'Est',
  'Est/Sud-Est',
  'Sud-Est',
  'Sud/Sud-Est',
  'Sud',
  'Sud/Sud-Ouest',
  'Sud-Ouest',
  'Ouest/Sud-Ouest',
  'Ouest',
  'Ouest/Nord-Ouest',
  'Nord-Ouest',
  'Nord/Nord-Ouest',
  'Nord');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'Partiel ',
  'BC' => 'Nappe ',
  'DR' => 'Depression ',
  'BL' => 'Soufflant ',
  'SH' => 'Averse(s) ',
  'TS' => 'Temp�te ',
  'FZ' => 'Gel',
  'DZ' => 'Bruine ',
  'RA' => 'Pluie ',
  'SN' => 'Neige ',
  'SG' => 'Flocons de neige ',
  'IC' => 'Cristaux de glace ',
  'PE' => 'Gr�lons ',
  'GR' => 'Gr�le ',
  'GS' => 'Gr�le l&eacute;g�re et/ou flocons de neige ',
  'UP' => 'Inconnu ',
  'BR' => 'Brume ',
  'FG' => 'Brouillard ',
  'FU' => 'Fum&eacute;e ',
  'VA' => 'Cendre volcanique ',
  'DU' => 'Poussi�re ',
  'SA' => 'Sable ',
  'HZ' => 'Brouillard ',
  'PY' => 'Spray',
  'PO' => 'Grands tourbillons de poussi�re ou de sable ',
  'SQ' => 'Rafales ',
  'FC' => "Trombe d'eau ",
  'SS' => 'Temp�te de sable ou de poussi�re ');

$cloud_condition_array = array(
  'SKC' => 'clair',
  'CLR' => 'clair',
  'VV'  => 'visibilit&eacute; verticale',
  'FEW' => 'un peu',
  'SCT' => '&eacute;parpill&eacute;',
  'BKN' => 'bris&eacute;',
  'OVC' => 'couvert');
?>
