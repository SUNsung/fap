
        
              click_on 'Save'
    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
    end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
        describe 'validations' do
      it 'calls validate_options' do
        agent = Agents::SomethingSource.new(:name => 'something')
        agent.user = users(:bob)
        agent.options[:bad] = true
        expect(agent).to have(1).error_on(:base)
        agent.options[:bad] = false
        expect(agent).to have(0).errors_on(:base)
      end
    
        def as_json
      @pages
    end
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = false
      super
    end
    
          max_length = if tag = str.slice!(/ \[.+\]\z/)
        terminal_width - tag.length
      else
        terminal_width
      end
    
        def subpath_from(url, options = nil)
      self.class.parse(url).subpath_to(self, options)
    end
    
            name = name.split(':').first
    
      def resource_params
    params.require(:custom_filter).permit(:phrase, :expires_in, :irreversible, :whole_word, context: [])
  end
end

    
        def filter_params
      params.permit(
        :local,
        :remote,
        :by_domain,
        :silenced,
        :recent,
        :suspended,
        :username,
        :display_name,
        :email,
        :ip,
        :staff
      )
    end
  end
end

    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
          log_action :confirm, @user
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      def local_domain?
    TagManager.instance.web_domain?(hub_topic_domain)
  end
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end