///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __TRENDSUI_H__
#define __TRENDSUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/choice.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/slider.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/stattext.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/spinctrl.h>
#include <wx/aui/auibook.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class TrendsDialogBase
///////////////////////////////////////////////////////////////////////////////
class TrendsDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxButton* m_bConfig;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnMonth( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMonth( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnConfig( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxChoice* m_cMonth;
		wxSlider* m_sMonth;
		wxCheckBox* m_checkBox13;
		wxCheckBox* m_cbOceanCurrents;
		wxCheckBox* m_cbPressure;
		wxCheckBox* m_cbSwellPlots;
		wxCheckBox* m_cbCyclones;
		wxCheckBox* m_cbITCZ;
		
		TrendsDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Trends Display Control"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxCLOSE_BOX|wxDIALOG_NO_PARENT|wxRESIZE_BORDER|wxSYSTEM_MENU ); 
		~TrendsDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class TrendsConfigDialogBase
///////////////////////////////////////////////////////////////////////////////
class TrendsConfigDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxAuiNotebook* m_auinotebook1;
		wxPanel* m_panel1;
		wxPanel* m_panel2;
		wxCheckBox* m_cbTropical;
		wxCheckBox* m_cbSubTropical;
		wxCheckBox* m_cbExtraTropical;
		wxCheckBox* m_cbRemanent;
		wxStaticText* m_staticText1;
		wxDatePickerCtrl* m_dPStart;
		wxStaticText* m_staticText2;
		wxDatePickerCtrl* m_datePicker2;
		wxStaticText* m_staticText4;
		wxSpinCtrl* m_spinCtrl1;
		wxStaticText* m_staticText5;
		wxSpinCtrl* m_spinCtrl2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCycloneConfig( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCycloneConfig( wxDateEvent& event ) { event.Skip(); }
		virtual void OnCycloneConfig( wxSpinEvent& event ) { event.Skip(); }
		
	
	public:
		
		TrendsConfigDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~TrendsConfigDialogBase();
	
};

#endif //__TRENDSUI_H__
