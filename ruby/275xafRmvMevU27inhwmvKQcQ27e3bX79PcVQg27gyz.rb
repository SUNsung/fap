
        
                      Time.utc(
                default[:year], default[:month], default[:day],
                default[:hour], default[:min], default[:sec]
              )
            end
          end
      end
    end
  end
end

    
        # Main render entry point shared by Action View and Action Controller.
    def render(context, options)
      if options.key?(:partial)
        render_partial(context, options)
      else
        render_template(context, options)
      end
    end
    
      def resource_params
    params.require(:custom_filter).permit(:phrase, :expires_in, :irreversible, :whole_word, context: [])
  end
end

    
    module Admin
  class ConfirmationsController < BaseController
    before_action :set_user
    before_action :check_confirmation, only: [:resend]
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
      def hub_callback
    params['hub.callback']
  end