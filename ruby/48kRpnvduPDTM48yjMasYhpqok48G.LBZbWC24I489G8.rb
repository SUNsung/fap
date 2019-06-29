
        
          def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      def load_export
    @export = Export.new(current_account)
  end
    
      included do
    before_action :set_user_activity
  end