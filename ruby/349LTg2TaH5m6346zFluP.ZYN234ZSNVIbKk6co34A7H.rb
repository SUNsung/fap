
        
          url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
    STDOUT.sync = true
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
            def initialize(_opts)
          # If EventMachine SSL support on Windows ever gets better, the code below will
          # set up the reactor to handle SSL
          #
          # @ssl_enabled = opts['ssl_cert'] && opts['ssl_key']
          # if @ssl_enabled
          #   em_opts[:tls_options] = {
          #   :private_key_file => Jekyll.sanitized_path(opts['source'], opts['ssl_key']),
          #   :cert_chain_file  => Jekyll.sanitized_path(opts['source'], opts['ssl_cert'])
          #   }
          #   em_opts[:secure] = true
          # end
    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
      describe 'cleanup_failed_jobs!' do
    before do
      3.times do |i|
        Delayed::Job.create(failed_at: Time.now - i.minutes)
      end
      @keep = Delayed::Job.order(:failed_at)[1]
    end
    
        it 'returns nil when passed nil' do
      expect(Utils.parse_duration(nil)).to be_nil
    end
    
        it 'should require credentials' do
      @checker.options['api_key'] = nil
      expect(@checker).not_to be_valid
    end
  end
    
      describe '#receive' do
    it 'sends a message' do
      stub(HTTParty).post { {'id' => 1, 'message' => 'blah', 'title' => 'blah','source_name' => 'Custom Notification'} }
      @checker.receive([@event])
    end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
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
    
      def encoded_challenge
    HTMLEntities.new.encode(params['hub.challenge'])
  end
    
      included do
    before_action :set_locale
  end
    
      def set_rate_limit_headers
    apply_header_limit
    apply_header_remaining
    apply_header_reset
  end
    
    def to_boolean(proc)
  IF[proc][true][false]
end
    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
            if state_index < current_index
          css_classes << 'completed'
          text = link_to text, checkout_state_path(state), class: 'nav-link'
        end
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
            private
    
            def approve
          authorize! :approve, @order, params[:token]
          @order.approved_by(current_api_user)
          respond_with(@order, default_template: :show)
        end
    
          @@property_attributes = [:id, :name, :presentation]
    
    # This example uses the API to create a package from local files
# it also creates necessary init-scripts and systemd files so our executable can be used as a service
    
        return str
  end
    
        # Build the packaging metadata files.
    checksums = {}
    self.files.each do |f|
      path = staging_path(f)
      if File.symlink?(path)
        checksums[f] = '-'
      elsif File.file?(path)
        checksums[f] = Digest::SHA256.file(path).hexdigest
      end
    end
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      option '--user', 'USER',
    'Set the user to USER in the prototype files.',
    :default => 'root'
    
        stdout_w.close; stderr_w.close
    logger.debug('Process is running', :pid => process.pid)
    if block_given?
      args3 = []
      args3.push(process)           if opts[:process]
      args3.push(process.io.stdin)  if opts[:stdin]
      args3.push(stdout_r)          if opts[:stdout]
      args3.push(stderr_r)          if opts[:stderr]
    
    # Like the ::Gem::Package::TarWriter but contains some backports and bug fixes
class FPM::Util::TarWriter < ::Gem::Package::TarWriter
  if FPM::Issues::TarWriter.has_issues_with_split_name?
    def split_name(name)
      if name.bytesize > 256 then
        raise ::Gem::Package::TooLongFileName.new('File \'#{name}\' has a too long path (should be 256 or less)')
      end