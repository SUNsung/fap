
        
                redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      def send_export_file
    respond_to do |format|
      format.csv { send_data export_data, filename: export_filename }
    end
  end
    
    Given(/^a test app without any configuration$/) do
  TestApp.create_test_app
end
    
            if obj && obj.errors[method].present?
          errors = safe_join(obj.errors[method], '<br />'.html_safe)
          content_tag(:span, errors, class: 'formError')
        else
          ''
        end
      end
    
        for_each_gem do |gem_path|
      sh 'gem push '#{gem_path}''
    end
  end
end
    
            def order_params
          if params[:order]
            normalize_params
            params.require(:order).permit(permitted_order_attributes)
          else
            {}
          end
        end
    
              options = { variants_attrs: variants_params, options_attrs: option_types_params }
          @product = Core::Importer::Product.new(nil, product_params, options).create