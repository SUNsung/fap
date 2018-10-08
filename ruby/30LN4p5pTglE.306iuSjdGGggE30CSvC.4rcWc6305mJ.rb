
        
        def built_as_bottle?(f)
  return false unless f.installed?
  tab = Tab.for_keg(f.installed_prefix)
  tab.built_as_bottle
end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
      def self.all
    opoo 'Formula.all is deprecated, use Formula.map instead'
    map
  end
    
      def create
    if signed_request_account
      upgrade_account
      process_payload
      head 202
    else
      render plain: signature_verification_failure_reason, status: 401
    end
  end
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
        def filter_params
      params.permit(
        :domain_name
      )
    end
  end
end

    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end