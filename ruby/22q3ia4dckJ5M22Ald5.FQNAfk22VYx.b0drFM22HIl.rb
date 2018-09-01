
        
                  def sanitized_value(value)
            value.to_s.gsub(/\s/, '_').gsub(/[^-[[:word:]]]/, '').mb_chars.downcase.to_s
          end
    
                case options[:default]
            when nil
              Time.current
            when Date, Time
              options[:default]
            else
              default = options[:default].dup
    
              content = if block_given?
            @template_object.capture(builder, &block)
          elsif @content.present?
            @content.to_s
          else
            render_component(builder)
          end
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
        def render_count(payload) # :doc:
      if payload[:cache_hits]
        '[#{payload[:cache_hits]} / #{payload[:count]} cache hits]'
      else
        '[#{payload[:count]} times]'
      end
    end
    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
          open_dry_run_modal(formatting_agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('Line 1\nLine 2\nLine 3')
      end
      click_on('Dry Run')
      expect(page).to have_text('Line 1,Line 2,Line 3')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
  end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
          context '#restart_dead_workers' do
        before do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
    # TODO:
# group :mongoid do
#   gem 'mongoid', '~> 4.0.0'
# end

    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
        # Creates/updates an entry object and returns the resulting entry.
    #
    # If the entry was new (no UUID), then the UUID will be set on the
    # resulting entry and can be used. Additionally, the a lock will
    # be created for the resulting entry, so you must {#release} it
    # if you want others to be able to access it.
    #
    # If the entry isn't new (has a UUID). then this process must hold
    # that entry's lock or else this set will fail.
    #
    # @param [Entry] entry
    # @return [Entry]
    def set(entry)
      # Get the struct and update the updated_at attribute
      struct = entry.to_json_struct
    
            # Halt the machine. This method should gracefully shut down the
        # operating system. This method will cause `vagrant halt` and associated
        # commands to _block_, meaning that if the machine doesn't halt
        # in a reasonable amount of time, this method should just return.
        #
        # If when this method returns, the machine's state isn't 'powered_off,'
        # Vagrant will proceed to forcefully shut the machine down.
        def halt
          raise BaseError, _key: :unsupported_halt
        end
    
              result
        end
    
              if name != UNSET_VALUE
            # Validate the name of the command
            if name.to_s !~ /^[-a-z0-9]+$/i
              raise InvalidCommandName, 'Commands can only contain letters, numbers, and hyphens'
            end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
      private
    
        def update
      authorize @user, :change_email?
    
          if @custom_emoji.update(resource_params)
        log_action :update, @custom_emoji
        flash[:notice] = I18n.t('admin.custom_emojis.updated_msg')
      else
        flash[:alert] =  I18n.t('admin.custom_emojis.update_failed_msg')
      end
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        def set_domain_block
      @domain_block = DomainBlock.find(params[:id])
    end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
    module Admin
  class ReportedStatusesController < BaseController
    before_action :set_report
    
      def lease_seconds_or_default
    (params['hub.lease_seconds'] || 1.day).to_i.seconds
  end
    
          errors.each do |error|
        summary << ' #{Formatter.error('-')} #{error}'
      end
    
                encoded
          end
    
              # Encodes the start_time field
          #
          # @return [String]
          def encode_start_time
            [start_time].pack('N')
          end
    
              private
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
                int
          end
    
                elems << OpenSSL::ASN1::ASN1Data.new([encode_options], 0, :CONTEXT_SPECIFIC) if options
            elems << OpenSSL::ASN1::ASN1Data.new([encode_cname], 1, :CONTEXT_SPECIFIC) if cname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_realm], 2, :CONTEXT_SPECIFIC) if realm
            elems << OpenSSL::ASN1::ASN1Data.new([encode_sname], 3, :CONTEXT_SPECIFIC) if sname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_from], 4, :CONTEXT_SPECIFIC) if from
            elems << OpenSSL::ASN1::ASN1Data.new([encode_till], 5, :CONTEXT_SPECIFIC) if till
            elems << OpenSSL::ASN1::ASN1Data.new([encode_rtime], 6, :CONTEXT_SPECIFIC) if rtime
            elems << OpenSSL::ASN1::ASN1Data.new([encode_nonce], 7, :CONTEXT_SPECIFIC) if nonce
            elems << OpenSSL::ASN1::ASN1Data.new([encode_etype], 8, :CONTEXT_SPECIFIC) if etype
            elems << OpenSSL::ASN1::ASN1Data.new([encode_enc_auth_data], 10, :CONTEXT_SPECIFIC) if enc_auth_data
    
                decode_asn1(asn1)
          end
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
        # Environment detection helpers
    def sprockets?
      defined?(::Sprockets)
    end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end