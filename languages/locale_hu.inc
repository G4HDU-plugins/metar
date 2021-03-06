<?php
/*
 * This file holds the Hungarian translation of PHP Weather. To use it,
 * Just include it in the main phpweather.inc file.
 *
 * Ez a f�jl tartalmazza a "PHP Weather" programhoz haszn�lhat� magyar
 * nyelv� ford�t�st.
 * Ha haszn�lni akarjuk, a "demo.php" f�jlban m�dos�tani kell a
 * nyelvre vonatkoz� "include('locale_en.inc');" hivatkoz�st 
 * erre: "include('locale_hu.inc');"
 *
 * Ford�totta: Gyulai Mih�ly  http://gyulai.freeyellow.com/
 * Utolj�ra m�dos�tva: 2001-06-23
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
  'no_data'               => '<blockquote><p>Sajnos <b>nincs adat</b> a megadott helyhez: %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> inch)',
  'precip_a_trace'        => 'nyomokban',
  'precip_there_was'      => '%s lecsap�d�s volt ',
  'sky_str_format1'       => 'Az �gbolt <b>%s</b> <b>%s</b> m magass�gban (<b>%s</b> l�b)',
  'sky_str_clear'         => 'Az �gbolt <b>der�lt</b>',
  'sky_str_format2'       => ', <b>%s</b> <b>%s</b> m magass�gban (<b>%s</b> l�b) �s <b>%s</b> <b>%s</b> m magass�gban (<b>%s</b> l�b)',
  'sky_str_format3'       => ' �s <b>%s</b> <b>%s</b> m magass�gban (<b>%s</b> l�b)',
  'sky_cavok'             => 'Nincsenek felh�k <b>1,500</b> m�ter alatt',
  'clouds'                => ' felh�s',
  'clouds_cb'             => ' gomolyfelh�s',
  'clouds_tcu'            => ' viharfelh�s',
  'visibility_format'     => 'A l�t�t�vols�g <b>%s</b> km.',
  'wind_str_format1'      => '<b>%s</b> m/s sebess�ggel f�jt',
  'wind_str_format2'      => ', <b>%s</b> m/s-os sz�ll�k�sekkel (<b>%s</b> m�rf�ld/h),',
  'wind_str_format3'      => ' <b>%s</b> ir�nyb�l',
  'wind_str_calm'         => '<b>nem f�j</b>',
  'wind_vrb_long'         => 'v�ltoz�',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' a h��rzet <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'az utols� �r�ban. ',
  'precip_last_6_hours'   => 'az ut�bbi 3-6 �r�ban. ',
  'precip_last_24_hours'  => 'az ut�bbi 24 �r�ban. ',
  'precip_snow'           => '<b>%s</b> mm (<b>%s</b> inch) h� van a felsz�nen. ',
  'temp_min_max_6_hours'  => 'A legmagasabb �s legalacsonyabb h�m�rs�kletek az ut�bbi 6 �r�ban: <b>%s</b> �s <b>%s</b>&nbsp;&deg;C (<b>%s</b> �s <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'A legmagasabb h�m�rs�klet az ut�bbi 6 �r�ban: <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'A legalacsonyabb h�m�rs�klet az ut�bbi 6 �r�ban: <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'A legmagasabb �s legalacsonyabb h�m�rs�klet az ut�bbi 24 �r�ban: <b>%s</b> �s <b>%s</b>&nbsp;&deg;C (<b>%s</b> �s <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'A <b>%s</b> kifut�p�lya l�that�s�ga, <b>%s</b> m (<b>%s</b> l�b).',
  'runway_vis_min_max'    => 'A <b>%s</b> kifut�p�lya l�that�s�ga v�ltoz� <b>%s</b> m (<b>%s</b> l�b) �s <b>%s</b> m (<b>%s</b> l�b) k�z�tt.',
  'light'                 => 'k�nny� ',
  'moderate'              => 'enyhe ',
  'Heavy'                 => 'er�s ',
  'nearby'                => 'k�zeli ',
  'current_weather'       => 'A pillanatnyi id�j�r�si jellemz�: <b>%s</b>. ',
  'pretty_print_metar' => '<blockquote><p><b>%s</b> perccel ezel�tt,
<b>%s</b> UTC-kor, a sz�l %s (%s). A h�m�rs�klet <b>%s</b>&nbsp;&deg;C
(<b>%s</b>&nbsp;&deg;F), %s a l�gnyom�s <b>%s</b> hPa (<b>%s</b>
Hgmm). Relat�v p�ratartalom <b>%s%%</b>. %s %s %s %s %s
%s</p></blockquote>'
 );

$wind_dir_text_short_array = array(
  '�',
  '�/�K',
  '�K',
  'K/�K',
  'K',
  'K/DK',
  'DK',
  'D/DK',
  'D',
  'D/DNY',
  'DNY',
  'NY/DNY',
  'NY',
  'NY/�NY',
  '�NY',
  '�/�NY',
  '�');

$wind_dir_text_array = array(
  '�szaki',
  '�szak/�szakkeleti',
  '�szakkeleti',
  'Kelet/�szakkeleti',
  'Keleti',
  'Kelet/D�lkeleti',
  'D�lkeleti',
  'D�l/D�lkeleti',
  'D�li',
  'D�l/D�lnyugati',
  'D�lnyugati',
  'Nyugat/D�lnyugati',
  'Nyugati',
  'Nyugat/�szaknyugati',
  '�szaknyugati',
  '�szak/�szaknyugati',
  '�szaki');

$weather_array = array(
  'MI' => 'felsz�nes ',
  'PR' => 'r�szleges ',
  'BC' => 'szakadozott ',
  'DR' => 'enyhe l�gmozg�s',
  'BL' => 'sz�ll�k�s',
  'SH' => 'z�por',
  'TS' => 'zivatar',
  'FZ' => 'fagy',
  'DZ' => 'szit�l� es�',
  'RA' => 'es�',
  'SN' => 'h�',
  'SG' => 'szemcs�s h�',
  'IC' => 'j�gkrist�ly',
  'PE' => 'j�gdara',
  'GR' => 'j�ges�',
  'GS' => 'apr� j�ges� �s/vagy h�dara',
  'UP' => 'ismeretlen',
  'BR' => 'k�d',
  'FG' => 's�r� k�d',
  'FU' => 'f�st',
  'VA' => 'vulk�ni hamu',
  'DU' => 'kiterjedt por',
  'SA' => 'homok',
  'HZ' => 'p�ra',
  'PY' => 'permet',
  'PO' => 'por/homok �rv�ny',
  'SQ' => 'sz�lroham',
  'FC' => 'felh�t�lcs�r/torn�d�/v�zoszlop',
  'SS' => 'homokvihar/porvihar');

$cloud_condition_array = array(
  'SKC' => 'der�lt',
  'CLR' => 'tiszta',
  'VV'  => 'f�gg�leges l�that�s�g',
  'FEW' => 'gyeng�n',
  'SCT' => 'sz�rv�nyosan',
  'BKN' => 'szakadozottan',
  'OVC' => 'borult');
?>
