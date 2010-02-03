// -*- C++ -*- generated by wxGlade 0.6.3

#include "DialogSettings.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogSettings::DialogSettings(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: DialogSettings::DialogSettings
    notebook_settings = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
    notebook_settings_pane_log = new wxPanel(notebook_settings, wxID_ANY);
    notebook_settings_pane_stats = new wxPanel(notebook_settings, wxID_ANY);
    notebook_settings_pane_conn = new wxPanel(notebook_settings, wxID_ANY);
    sizer_quality_staticbox = new wxStaticBox(notebook_settings_pane_conn, -1, _("JPEG Quality"));
    sizer_compresslevel_staticbox = new wxStaticBox(notebook_settings_pane_conn, -1, _("Compression Level"));
    label_compresslevel = new wxStaticText(notebook_settings_pane_conn, wxID_ANY, _("Use specified compression level for \"tight\" and \"zlib\" encodings (TightVNC-specific)."));
    slider_compresslevel = new wxSlider(notebook_settings_pane_conn, wxID_ANY, 0, 0, 9, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_LABELS);
    label_quality = new wxStaticText(notebook_settings_pane_conn, wxID_ANY, _("Use the specified JPEG quality level for the  \"tight\"  encoding  (TightVNC-specific)."));
    slider_quality = new wxSlider(notebook_settings_pane_conn, wxID_ANY, 0, 0, 9, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_LABELS);
    checkbox_multicast = new wxCheckBox(notebook_settings_pane_conn, wxID_ANY, _("Use MulticastVNC"));
    checkbox_stats_save = new wxCheckBox(notebook_settings_pane_stats, wxID_ANY, _("Autosave statistics on close"));
    checkbox_logfile = new wxCheckBox(notebook_settings_pane_log, wxID_ANY, _("Write VNC log to logfile (MultiVNC.log)"));

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogSettings::set_properties()
{
    // begin wxGlade: DialogSettings::set_properties
    slider_compresslevel->SetToolTip(_("Use specified compression level (0..9) for \"tight\" and \"zlib\" encodings (TightVNC-specific). Level 1 uses minimum of CPU time and achieves weak compression ratios, while level 9 offers best compression but is slow in terms of CPU time consumption on the server side. Use high levels with very slow network connections, and low levels when working over high-speed LANs."));
    slider_quality->SetToolTip(_("Use the specified JPEG quality level (0..9) for the \"tight\" encoding (TightVNC-specific). Quality level 0 denotes bad image quality but very impressive compression ratios, while level 9 offers very good image quality at lower compression ratios. Note that the \"tight\" encoder uses JPEG to encode only those screen areas that look suitable for lossy compression, so quality level 0 does not always mean unacceptable image quality."));
    // end wxGlade
}


void DialogSettings::do_layout()
{
    // begin wxGlade: DialogSettings::do_layout
    wxBoxSizer* sizer_top = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_log = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_stats = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_conn = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_misc = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* sizer_quality = new wxStaticBoxSizer(sizer_quality_staticbox, wxVERTICAL);
    wxStaticBoxSizer* sizer_compresslevel = new wxStaticBoxSizer(sizer_compresslevel_staticbox, wxVERTICAL);
    sizer_compresslevel->Add(label_compresslevel, 0, wxALL|wxADJUST_MINSIZE, 3);
    sizer_compresslevel->Add(slider_compresslevel, 0, wxALL|wxEXPAND|wxADJUST_MINSIZE, 3);
    sizer_conn->Add(sizer_compresslevel, 1, wxALL|wxEXPAND, 3);
    sizer_quality->Add(label_quality, 0, wxALL|wxADJUST_MINSIZE, 3);
    sizer_quality->Add(slider_quality, 0, wxALL|wxEXPAND|wxADJUST_MINSIZE, 3);
    sizer_conn->Add(sizer_quality, 1, wxALL|wxEXPAND, 3);
    sizer_misc->Add(checkbox_multicast, 0, wxALL|wxEXPAND|wxADJUST_MINSIZE, 3);
    sizer_conn->Add(sizer_misc, 1, wxALL, 3);
    notebook_settings_pane_conn->SetSizer(sizer_conn);
    sizer_stats->Add(checkbox_stats_save, 0, wxALL|wxADJUST_MINSIZE, 3);
    notebook_settings_pane_stats->SetSizer(sizer_stats);
    sizer_log->Add(checkbox_logfile, 0, wxALL|wxADJUST_MINSIZE, 3);
    notebook_settings_pane_log->SetSizer(sizer_log);
    notebook_settings->AddPage(notebook_settings_pane_conn, _("Connections"));
    notebook_settings->AddPage(notebook_settings_pane_stats, _("Statistics"));
    notebook_settings->AddPage(notebook_settings_pane_log, _("Logging"));
    sizer_top->Add(notebook_settings, 1, wxALL|wxEXPAND, 3);
    SetSizer(sizer_top);
    sizer_top->Fit(this);
    Layout();
    // end wxGlade
}

