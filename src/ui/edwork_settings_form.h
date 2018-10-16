#ifndef __EDWORK_SETTINGS_FORM_H
#define __EDWORK_SETTINGS_FORM_H

static const char *edwork_settings_form = 
    "<!DOCTYPE html>\n"
    "<html lang=\"en\">\n"
    "  <head>\n"
    "    <meta charset=\"utf-8\" />\n"
    "    <meta http-equiv=\"x-ua-compatible\" content=\"ie=edge\" />\n"
    "    <title></title>\n"
    "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\" />\n"
    "\n"
    "    <style>\n"
    "      /*!\n"
    "      * Tent CSS\n"
    "      * http://css.sitetent.com\n"
    "      *\n"
    "      * Copyright (c) 2017, Aaron Mazade\n"
    "      * Licensed under the MIT license\n"
    "      */ html{box-sizing:border-box;line-height:1;font-size:100%;-ms-text-size-adjust:100%;-webkit-text-size-adjust:100%;-webkit-font-smoothing:antialiased;-moz-osx-font-smoothing:grayscale}*,*:before,*:after{box-sizing:inherit}body{margin:0;font-family:sans-serif}iframe{border:0}main{display:block}sup{position:relative;top:-.5em;vertical-align:baseline;font-size:75%;line-height:0}strong{font-weight:bold}figure{margin:0}::-moz-focus-inner{border:0;padding:0}body{background-color:#fff;color:#444;font-weight:400;font-size:1em;font-family:-apple-system,BlinkMacSystemFont,\"Segoe UI\",Ubuntu,\"Open Sans\",\"Helvetica Neue\",sans-serif;line-height:1.6}hr{display:block;margin:1.5rem 0;height:1px;border:none;background-color:#dbdbdb}img{max-width:100%;height:auto;border:0;vertical-align:middle}a{color:#0074D9;text-decoration:none}a:hover,a:focus,a:active{color:#004b8d}button{border:0;margin:0;padding:0;text-align:inherit;text-transform:inherit;font:inherit;letter-spacing:inherit;background:none;cursor:pointer;overflow:visible}blockquote{margin:0 0 1rem;padding:0 0 0 .5rem;border-left:4px solid #6E6E6E}cite{font-style:italic}code{font-family:\"Lucida Console\",Courier,monospace;font-size:inherit;color:#0074D9;background-color:#F2F2F2;padding:.125rem .25rem}p{margin:0 0 1.5rem}p:last-child{margin-bottom:0}h1,h2,h3,h4,h5,h6{display:block;margin:0 0 2rem;color:#444;font-weight:inherit;font-size:inherit;line-height:1.25}h1:last-child,h2:last-child,h3:last-child,h4:last-child,h5:last-child,h6:last-child{margin-bottom:0}h1{font-size:3rem}h2{font-size:2.5rem}h3{font-size:2rem}h4{font-size:1.25rem}h5{font-size:1.125rem}h6{font-size:1rem}textarea{overflow:auto}input[type=\"email\"],input[type=\"number\"],input[type=\"search\"],input[type=\"text\"],input[type=\"tel\"],input[type=\"url\"],input[type=\"password\"],textarea,select{display:block;margin:0 0 1.5rem;padding:.5rem 1rem;width:auto;border:1px solid #E0E0E0;border-radius:0;background-color:#fff;color:#A4A4A4;font-size:1rem;font-family:inherit;-webkit-appearance:none;-moz-appearance:none;appearance:none}input[type=\"email\"]:focus,input[type=\"number\"]:focus,input[type=\"search\"]:focus,input[type=\"text\"]:focus,input[type=\"tel\"]:focus,input[type=\"url\"]:focus,input[type=\"password\"]:focus,textarea:focus,select:focus{border-color:#0074D9}ul,ol{margin:0 0 1.5rem;padding:0}ul{list-style:circle inside}ol{list-style:decimal inside}li{display:list-item;margin-bottom:.5rem}dl{margin-top:0;margin-bottom:0}dd{margin-left:0}table{border-spacing:0}table td{padding:.5rem}.container{position:relative;margin:0 auto;padding:0;width:100%}@media (min-width: 576px){.container{max-width:33.75rem}}@media (min-width: 768px){.container{max-width:45rem}}@media (min-width: 992px){.container{max-width:71.25rem}}.container--fluid{max-width:100%}.flex,.grid,.control--inline{display:-ms-flexbox;display:flex;-ms-flex-direction:row;flex-direction:row}.flex--stack,.grid--stack{-ms-flex-direction:column;flex-direction:column}.flex--top,.grid--top{-ms-flex-align:start;align-items:flex-start}.flex--bottom,.grid--bottom{-ms-flex-align:end;align-items:flex-end}.flex--center,.grid--center{-ms-flex-align:center;align-items:center}.flex--stretch,.grid--stretch{-ms-flex-align:stretch;align-items:stretch}.flex--baseline,.grid--baseline{-ms-flex-align:baseline;align-items:baseline}.flex--justify-center,.grid--justify-center{-ms-flex-pack:center;justify-content:center}.flex--justify-start,.grid--justify-start{-ms-flex-pack:start;justify-content:flex-start}.flex--justify-end,.grid--justify-end{-ms-flex-pack:end;justify-content:flex-end}.flex__item,.grid__column{display:block;-ms-flex:1;flex:1}.flex__item--top,.grid__column--top{-ms-flex-item-align:start;align-self:flex-start}.flex__item--bottom,.grid__column--bottom{-ms-flex-item-align:end;align-self:flex-end}.flex__item--center,.grid__column--center{-ms-flex-item-align:center;-ms-grid-row-align:center;align-self:center}.flex-first{-ms-flex-order:-1;order:-1}.flex-last{-ms-flex-order:1;order:1}@media (min-width: 576px){.flex-first--sm{-ms-flex-order:-1;order:-1}.flex-last--sm{-ms-flex-order:1;order:1}}@media (min-width: 768px){.flex-first--md{-ms-flex-order:-1;order:-1}.flex-last--md{-ms-flex-order:1;order:1}}@media (min-width: 992px){.flex-first--lg{-ms-flex-order:-1;order:-1}.flex-last--lg{-ms-flex-order:1;order:1}}@media (min-width: 1200px){.flex-first--xl{-ms-flex-order:-1;order:-1}.flex-last--xl{-ms-flex-order:1;order:1}}.grid{padding:0;width:100%;-ms-flex-wrap:wrap;flex-wrap:wrap;-ms-flex-direction:row;flex-direction:row}.grid--gutterless>.grid__column{padding:0}.grid__column{margin-left:0;max-width:100%;width:100%;padding-left:1rem;padding-right:1rem}.grid__column--1{-ms-flex:0 0 8.33333%;flex:0 0 8.33333%;max-width:8.33333%}.grid__column--2{-ms-flex:0 0 16.66667%;flex:0 0 16.66667%;max-width:16.66667%}.grid__column--3{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.grid__column--4{-ms-flex:0 0 33.33333%;flex:0 0 33.33333%;max-width:33.33333%}.grid__column--5{-ms-flex:0 0 41.66667%;flex:0 0 41.66667%;max-width:41.66667%}.grid__column--6{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.grid__column--7{-ms-flex:0 0 58.33333%;flex:0 0 58.33333%;max-width:58.33333%}.grid__column--8{-ms-flex:0 0 66.66667%;flex:0 0 66.66667%;max-width:66.66667%}.grid__column--9{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.grid__column--10{-ms-flex:0 0 83.33333%;flex:0 0 83.33333%;max-width:83.33333%}.grid__column--11{-ms-flex:0 0 91.66667%;flex:0 0 91.66667%;max-width:91.66667%}.grid__column--12{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}@media (min-width: 576px){.grid__column--1--sm{-ms-flex:0 0 8.33333%;flex:0 0 8.33333%;max-width:8.33333%}.grid__column--2--sm{-ms-flex:0 0 16.66667%;flex:0 0 16.66667%;max-width:16.66667%}.grid__column--3--sm{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.grid__column--4--sm{-ms-flex:0 0 33.33333%;flex:0 0 33.33333%;max-width:33.33333%}.grid__column--5--sm{-ms-flex:0 0 41.66667%;flex:0 0 41.66667%;max-width:41.66667%}.grid__column--6--sm{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.grid__column--7--sm{-ms-flex:0 0 58.33333%;flex:0 0 58.33333%;max-width:58.33333%}.grid__column--8--sm{-ms-flex:0 0 66.66667%;flex:0 0 66.66667%;max-width:66.66667%}.grid__column--9--sm{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.grid__column--10--sm{-ms-flex:0 0 83.33333%;flex:0 0 83.33333%;max-width:83.33333%}.grid__column--11--sm{-ms-flex:0 0 91.66667%;flex:0 0 91.66667%;max-width:91.66667%}.grid__column--12--sm{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}}@media (min-width: 768px){.grid__column--1--md{-ms-flex:0 0 8.33333%;flex:0 0 8.33333%;max-width:8.33333%}.grid__column--2--md{-ms-flex:0 0 16.66667%;flex:0 0 16.66667%;max-width:16.66667%}.grid__column--3--md{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.grid__column--4--md{-ms-flex:0 0 33.33333%;flex:0 0 33.33333%;max-width:33.33333%}.grid__column--5--md{-ms-flex:0 0 41.66667%;flex:0 0 41.66667%;max-width:41.66667%}.grid__column--6--md{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.grid__column--7--md{-ms-flex:0 0 58.33333%;flex:0 0 58.33333%;max-width:58.33333%}.grid__column--8--md{-ms-flex:0 0 66.66667%;flex:0 0 66.66667%;max-width:66.66667%}.grid__column--9--md{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.grid__column--10--md{-ms-flex:0 0 83.33333%;flex:0 0 83.33333%;max-width:83.33333%}.grid__column--11--md{-ms-flex:0 0 91.66667%;flex:0 0 91.66667%;max-width:91.66667%}.grid__column--12--md{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}}@media (min-width: 992px){.grid__column--1--lg{-ms-flex:0 0 8.33333%;flex:0 0 8.33333%;max-width:8.33333%}.grid__column--2--lg{-ms-flex:0 0 16.66667%;flex:0 0 16.66667%;max-width:16.66667%}.grid__column--3--lg{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.grid__column--4--lg{-ms-flex:0 0 33.33333%;flex:0 0 33.33333%;max-width:33.33333%}.grid__column--5--lg{-ms-flex:0 0 41.66667%;flex:0 0 41.66667%;max-width:41.66667%}.grid__column--6--lg{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.grid__column--7--lg{-ms-flex:0 0 58.33333%;flex:0 0 58.33333%;max-width:58.33333%}.grid__column--8--lg{-ms-flex:0 0 66.66667%;flex:0 0 66.66667%;max-width:66.66667%}.grid__column--9--lg{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.grid__column--10--lg{-ms-flex:0 0 83.33333%;flex:0 0 83.33333%;max-width:83.33333%}.grid__column--11--lg{-ms-flex:0 0 91.66667%;flex:0 0 91.66667%;max-width:91.66667%}.grid__column--12--lg{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}}@media (min-width: 1200px){.grid__column--1--xl{-ms-flex:0 0 8.33333%;flex:0 0 8.33333%;max-width:8.33333%}.grid__column--2--xl{-ms-flex:0 0 16.66667%;flex:0 0 16.66667%;max-width:16.66667%}.grid__column--3--xl{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.grid__column--4--xl{-ms-flex:0 0 33.33333%;flex:0 0 33.33333%;max-width:33.33333%}.grid__column--5--xl{-ms-flex:0 0 41.66667%;flex:0 0 41.66667%;max-width:41.66667%}.grid__column--6--xl{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.grid__column--7--xl{-ms-flex:0 0 58.33333%;flex:0 0 58.33333%;max-width:58.33333%}.grid__column--8--xl{-ms-flex:0 0 66.66667%;flex:0 0 66.66667%;max-width:66.66667%}.grid__column--9--xl{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.grid__column--10--xl{-ms-flex:0 0 83.33333%;flex:0 0 83.33333%;max-width:83.33333%}.grid__column--11--xl{-ms-flex:0 0 91.66667%;flex:0 0 91.66667%;max-width:91.66667%}.grid__column--12--xl{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}}@media (min-width: 576px){.grid{width:100%}.grid__column{padding:0 1rem}}.list--unstyled,.list--inline{list-style-type:none;padding:0}.list--inline .list__item{display:inline-block}.list--inline .list__item:not(:last-child){padding-right:25px}.list--nulled,.list--nulled .list__item{margin:0}.table--stripped .table__body .table__row:not(:nth-child(even)) .table__cell{background-color:#F2F2F2}.title--xxxs,.subtitle--xxxs{font-size:.625rem}.title--xxs,.subtitle--xxs{font-size:.75rem}.title--xs,.subtitle--xs{font-size:.875rem}.title--sm,.subtitle--sm{font-size:1rem}.title--md,.subtitle--md{font-size:1.125rem}.title--lg,.subtitle--lg{font-size:1.25rem}.title--xl,.subtitle--xl{font-size:2rem}.title--xxl,.subtitle--xxl{font-size:2.5rem}.title--xxxl,.subtitle--xxxl{font-size:3rem}.title{font-weight:700}.subtitle{font-weight:100}.title,.subtitle{word-break:break-word}.title:not(:last-child),.subtitle:not(:last-child){margin-bottom:1rem}.title-set .title{margin:0}.title-set .title+.subtitle{margin-top:0}.lead{font-weight:300;font-size:18px;line-height:1.6}.button{display:inline-block;margin-bottom:.5rem;padding:.5rem 2.5rem;border:2px solid #6E6E6E;border-radius:0;background-color:#6E6E6E;color:#fff;text-decoration:none;text-transform:uppercase;font-size:inherit;transition:all 1s ease}.button.button--primary:hover,.button.button--primary:focus,.button.button--primary:active{border-color:#00305a;background-color:#0059a6;color:#fff}.button.button--secondary:hover,.button.button--secondary:focus,.button.button--secondary:active{border-color:#193e2d;background-color:#2e7555;color:#fff}.button.button--tertiary:hover,.button.button--tertiary:focus,.button.button--tertiary:active{border-color:#b60a00;background-color:#ff1103;color:#fff}.button--xxxs{padding:.5rem 1rem;font-size:.625rem}.button--xxs{padding:.5rem 2rem;font-size:.625rem}.button--xs{padding:.5rem 1.5rem;font-size:.75rem}.button--sm{padding:.5rem 2.5rem;font-size:.875rem}.button--md{padding:.5rem 2.5rem;font-size:.875rem}.button--lg{padding:1rem 3rem;font-size:1.125rem}.button--xl{padding:1rem 3.5rem;font-size:1.25rem}.button--xxl{padding:1rem 4rem;font-size:1.25rem}.button--xxxl{padding:1rem 4.5rem;font-size:1.25rem}.button--block{width:100%;text-align:center}.button--filled:hover,.button--filled:focus,.button--filled:active{border-color:#2e2e2e;background-color:#555;color:#fff}.button--filled.button--primary{border-color:#0074D9;background-color:#0074D9;color:#fff}.button--filled.button--secondary{border-color:#3D9970;background-color:#3D9970;color:#fff}.button--filled.button--tertiary{border-color:#FF4136;background-color:#FF4136;color:#fff}.button--outlined{background-color:transparent;color:#6E6E6E}.button--outlined:hover,.button--outlined:focus,.button--outlined:active{border-color:#2e2e2e;background-color:#555;color:#fff}.button--outlined.button--primary{border-color:#0074D9;color:#0074D9}.button--outlined.button--secondary{border-color:#3D9970;color:#3D9970}.button--outlined.button--tertiary{border-color:#FF4136;color:#FF4136}.button--clear{border-color:transparent;background-color:transparent;color:#6E6E6E}.button--clear:hover,.button--clear:focus,.button--clear:active{border-bottom:2px solid #6E6E6E;color:#6E6E6E}.card{display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column;overflow:hidden;margin-bottom:1rem;border:1px solid #E0E0E0;border-radius:0;background:#fff;color:#444}.card>:last-child{margin-bottom:0}.card__image{margin:0 auto;max-width:100%}.card__content{padding:1rem;-ms-flex:1 0 auto;flex:1 0 auto}.card__content>:last-child{margin-bottom:0}.card--filled{background-color:#444}.card--filled.card--primary{background-color:#0074D9}.card--filled.card--secondary{background-color:#3D9970}.card--filled.card--tertiary{background-color:#FF4136}.card--outlined{border:2px solid transparent}.card--outlined.card--primary{border-color:#0074D9}.card--outlined.card--secondary{border-color:#3D9970}.card--outlined.card--tertiary{border-color:#FF4136}.card--raised{box-shadow:0 0.2rem 0.4rem 0 rgba(0,0,0,0.04),0 0.2rem 1rem 0 rgba(0,0,0,0.1)}.card--clear,.card--feature{border:0}.card--clear{background:transparent}.control__label{display:block;margin:0 0 0 0 .5rem;font-weight:600}.control--radio .control__label,.control--checkbox .control__label{font-weight:400}.control--inline{-ms-flex-direction:column;flex-direction:column}.control--inline .control__label:not(:first-child){margin-left:0}@media (min-width: 576px){.control--inline{-ms-flex-direction:row;flex-direction:row}.control--inline .control__label:not(:first-child){margin-left:.5rem}}.control--block,.control--block .control__input,.control--block .control__textarea,.control--block .control__select{width:100%}.control--select{display:inline-block;vertical-align:top;position:relative;margin:0 0 1.5rem}.control--select:after{content:\"\";border:1px solid #0074D9;border-right:0;border-top:0;display:block;position:absolute;height:.5rem;pointer-events:none;transform:rotate(-45deg);width:.5rem;margin-top:-0.375em;right:1.125em;top:50%;z-index:4}.control__select{padding-right:2.5rem;margin:0}.control__textarea--sm{min-height:5rem}.control__textarea--md{min-height:8.75rem}.control__textarea--lg{min-height:12.5rem}.color-primary{color:#0074D9}.color-secondary{color:#3D9970}.color-tertiary{color:#FF4136}.color-light{color:#E0E0E0}.color-lighter{color:#F2F2F2}.color-lightest{color:#fff}.color-medium{color:#A4A4A4}.color-dark{color:#6E6E6E}.color-darker{color:#444}.color-darkest{color:#111}.bg-color-primary{background-color:#0074D9}.bg-color-secondary{background-color:#3D9970}.bg-color-tertiary{background-color:#FF4136}.bg-color-light{background-color:#E0E0E0}.bg-color-lighter{background-color:#F2F2F2}.bg-color-lightest{background-color:#fff}.bg-color-medium{background-color:#A4A4A4}.bg-color-dark{background-color:#6E6E6E}.bg-color-darker{background-color:#444}.bg-color-darkest{background-color:#111}.inverse{color:#F2F2F2}.inverse h1,.inverse h2,.inverse h3,.inverse h4,.inverse h5,.inverse h6{color:#F2F2F2}.display-block{display:block}.display-flex{display:-ms-flexbox;display:flex}.display-inline-block{display:inline-block}.display-inline{display:inline}.display-none{display:none}.display-table{display:table}.padding-xxxs{padding:.5rem}.padding-xxs{padding:1rem}.padding-xs{padding:1.5rem}.padding-sm{padding:2rem}.padding-md{padding:2.5rem}.padding-lg{padding:3rem}.padding-xl{padding:3.5rem}.padding-xxl{padding:4rem}.padding-xxxl{padding:4.5rem}.padding-y{padding-left:0;padding-right:0}.padding-x{padding-top:0;padding-bottom:0}.padding-nulled{padding:0}.margin-xxxs{margin:.5rem}.margin-xxs{margin:1rem}.margin-xs{margin:1.5rem}.margin-sm{margin:2rem}.margin-md{margin:2.5rem}.margin-lg{margin:3rem}.margin-xl{margin:3.5rem}.margin-xxl{margin:4rem}.margin-xxxl{margin:4.5rem}.margin-y{margin-left:0;margin-right:0}.margin-x{margin-top:0;margin-bottom:0}.margin-nulled{margin:0}.height-full{height:100%}.type-italic{font-style:italic}.type-bold{font-weight:700}.type-black{font-weight:900}.type-small{font-size:.7em}.type-caps{font-variant:small-caps}.type-uppercase{text-transform:uppercase}.type-justify{text-align:justify}.type-left{text-align:left}.type-right{text-align:right}.type-center{text-align:center}\n"
    "    </style>\n"
    "  </head>\n"
    "  <body>\n"
    "    <main class=\"mastcontent\">\n"
    "      <div class=\"container\">\n"
    "        <h2 class=\"subtitle subtitle--xxl\">edwork management tool</h2>\n"
    "        <hr/>\n"
    "        <p>Partitions:</p>\n"
    "        <form>\n"
    "          <div class=\"grid\">\n"
    "            <div class=\"grid__column\">\n"
    "              <dl id='keys'>\n"
    "                <h4>No available keys</h4>\n"
    "              </dl>\n"
    "              <a class=\"button button--filled button--xxxs\" href='javascript: window.edworkData = \"!\"; window.external.notify();'>new partition</a>"
    "              <a class=\"button button--filled button--xxxs\" href='javascript: window.edworkData = \"q\"; window.external.notify();'>stop edwork service</a>"
    "            </div>\n"
    "          </div>\n"
    "        </form>\n"
    "      </div>\n"
    "    </main>\n"
    "  </body>\n"
    "  <script>\n"
    "    function no_keys() {\n"
    "      document.getElementById(\"keys\").innerHTML = \"<h4>No available keys</h4>\";"
    "    }\n\n"
    "    function clear_keys() {\n"
    "      document.getElementById(\"keys\").innerHTML = \"\";"
    "    }\n\n"
    "    function add_key(keyid, pubkey, privkey, is_primary_partition) {\n"
    "      var keys = document.getElementById(\"keys\");\n"
    "      var html = \"\";\n"
    "      if ((privkey) && (privkey.length)) {\n"
    "         html += \"<dt><h3 class=\\\"subtitle subtitle--xl\\\">\" + keyid + \"</h3></dt><dd style='margin-bottom: 20px'>\";\n"
    "         html += \"Partition is <b>writeable</b> at address<br/><span class=\\\"color-dark\\\">edwork:\" + privkey + \"</span> <a href='' onclick='window.clipboardData.setData(\\\"Text\\\", \\\"edwork:\" + privkey + \"\\\"); return false;'>(copy)</a><br/>\";\n"
    "      } else\n"
    "         html += \"<dt><h3 class=\\\"subtitle subtitle--xl\\\">\" + keyid + \" (read-only)</h3></dt><dd style='margin-bottom: 20px'>\";\n"
    "      if ((pubkey) && (pubkey.length))\n"
    "         html += \"Read-only access at<br/><span class=\\\"color-dark\\\">edwork:\" + pubkey + \"</span> <a href='' onclick='window.clipboardData.setData(\\\"Text\\\", \\\"edwork:\" + pubkey + \"\\\"); return false;'>(copy)</a><br/>\";\n"
    "      html += \"<span id=\\\"storage_usage_\" + keyid + \"\\\" class=\\\"color-darkest\\\"></span>\";\n"
    "      if ((!is_primary_partition) && (!is_primary_partition.length))\n"
    "         html += \"<a class=\\\"button button--outlined button--xxxs\\\" href='javascript: window.edworkData = \\\"@\" + keyid + \"\\\"; window.external.notify();'>make primary</a> \";\n"
    "      html += \"<a class=\\\"button button--outlined button--xxxs\\\" href='javascript: window.edworkData = \\\"*\" + keyid + \"\\\"; window.external.notify();'>storage statistics</a> \";\n"
    "      if ((!is_primary_partition) && (!is_primary_partition.length))\n"
    "         html += \"<a class=\\\"button button--outlined button--xxxs button--tertiary\\\" href='javascript: window.edworkData = \\\"-\" + keyid + \"\\\"; window.external.notify();'>remove</a> \";\n"
    "      keys.innerHTML += html;\n"
    "    }\n\n"
    "    function lastevent() {\n"
    "      var data = window.edworkData;\n"
    "      delete window.edworkData;\n"
    "      return data;\n"
    "    }\n\n"
    "    function filesystem_usage(keyid, usage_string) {\n"
    "      document.getElementById(\"storage_usage_\" + keyid).innerHTML = \"<br/>\" + usage_string + \"<br/><br/>\";\n"
    "    }\n"
    "  </script>\n"
    "</html>";

#endif
