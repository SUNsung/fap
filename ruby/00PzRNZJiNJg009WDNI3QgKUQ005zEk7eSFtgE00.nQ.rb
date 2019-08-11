
        
            def log_request(method, url, params, headers = nil, &block)
      url ||= extract_key_from_block('url', &block)
      body = extract_key_from_block('body', &block)
      body_to_log = '[undefined body]'
      if body
        begin
          body = JSON.parse(body)
          # replace password in body if present
          body['password'] = '***' if body.kind_of?(Hash) && body.key?('password')
          body_to_log = body.to_json
        rescue JSON::ParserError
          # no json, no password to replace
          body_to_log = '[non JSON body]'
        end
      end
      params_to_log = Hash(params).dup # to also work with nil
      params_to_log.delete(:accountPassword) # Dev Portal
      params_to_log.delete(:theAccountPW) # iTC
      params_to_log = params_to_log.collect do |key, value|
        '{#{key}: #{value}}'
      end
      logger.info('>> #{method.upcase} #{url}: #{body_to_log} #{params_to_log.join(', ')}')
    end
    
        # Pass a action symbol (e.g. :deliver or :commit_version_bump)
    # and this method will return a reference to the action class
    # if it exists. In case the action with this name can't be found
    # this method will return nil.
    # This method is being called by `trigger_action_by_name` to see
    # if a given action is available (either built-in or loaded from a plugin)
    # and is also being called from the fastlane docs generator
    def class_reference_from_action_name(method_sym)
      method_str = method_sym.to_s.delete('?') # as a `?` could be at the end of the method name
      class_ref = Actions.action_class_ref(method_str)
    
            it 'finds the one build when no app version is provided' do
          allow(fake_app).to receive(:latest_version).and_return(fake_version)
          allow(fake_version).to receive(:candidate_builds).and_return(fake_builds, fake_builds_with_processed_build)
          only_build = fake_builds.first
          allow(review_submitter).to receive(:sleep)
          expect(review_submitter.wait_for_build(fake_app, nil)).to equal(fake_builds_with_processed_build.first)
        end
      end
    
            destinations = devices.map do |d|
          device = find_device(d, os_version)
          if device.nil?
            UI.user_error!('No device found named '#{d}' for version '#{os_version}'') if device.nil?
          elsif device.os_version != os_version
            UI.important('Using device named '#{device.name}' with version '#{device.os_version}' because no match was found for version '#{os_version}'')
          end
          '-destination 'platform=#{os} Simulator,name=#{device.name},OS=#{device.os_version}''
        end
    
            if Snapshot.config[:namespace_log_files]
          name_components << device_type if device_type
          name_components << language if language
          name_components << locale if locale
        end
    
    require_relative '../helper'
    
          # This converts an rsync exclude pattern to a regular expression
      # we can send to Listen.
      #
      # Note: Listen expects a path relative to the parameter passed into the
      # Listener, not a fully qualified path
      #
      # @param [String]  - exclude path
      # @return [Regexp] - A regex of the path, modified, to exclude
      def self.exclude_to_regexp(exclude)
        start_anchor = false
    
    # Gems
require 'checkpoint'
require 'webmock/rspec'
require 'rspec/its'
    
        let(:empty_network_settings) { {'NetworkSettings' => {'Bridge'=>'', 'SandboxID'=>'randomid', 'HairpinMode'=>false, 'LinkLocalIPv6Address'=>'', 'LinkLocalIPv6PrefixLen'=>0, 'Ports'=>'', 'SandboxKey'=>'/var/run/docker/netns/158b7024a9e4', 'SecondaryIPAddresses'=>nil, 'SecondaryIPv6Addresses'=>nil, 'EndpointID'=>'randomEndpointID', 'Gateway'=>'172.17.0.1', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'IPAddress'=>'', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'MacAddress'=>'02:42:ac:11:00:02', 'Networks'=>{'bridge'=>{'IPAMConfig'=>nil, 'Links'=>nil, 'Aliases'=>nil, 'NetworkID'=>'networkIDVar', 'EndpointID'=>'endpointIDVar', 'Gateway'=>'127.0.0.1', 'IPAddress'=>'127.0.0.1', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'MacAddress'=>'02:42:ac:11:00:02', 'DriverOpts'=>nil}}}} }
    
              # Create a temporary file to store the data so we can upload it.
          remote_file = File.join(guest_provisioning_path, 'dna.json')
          @machine.communicate.sudo(remove_command(remote_file), error_check: false)
          Tempfile.open('vagrant-chef-provisioner-config') do |f|
            f.binmode
            f.write(json)
            f.fsync
            f.close
            @machine.communicate.upload(f.path, remote_file)
          end
        end
    
      subject { described_class }
    
          with_temp_env('VAGRANT_DEFAULT_PROVIDER' => 'baz',
                    'VAGRANT_PREFERRED_PROVIDERS' => nil) do
        expect(subject.default_provider(
          exclude: [:baz], force_default: false)).to eq(:bar)
      end
    end
    
        it 'should set if plugin is environment local' do
      expect(subject).to receive(:internal_install) do |info, update, opts|
        expect(opts[:env_local]).to be_truthy
      end
      subject.install_local(plugin_path, env_local: true)
    end
  end
    
                build_download_options(o, download_options)
          end
    
              it 'updates the box' do
            # First call gets nil result to for lookup
            expect(machine).to receive(:box).and_return(nil)
            expect(Vagrant::BoxCollection).to receive(:new).and_return(collection)
            expect(collection).to receive(:find).and_return(box)
    
      #
  # Attempts to enter exclusive section.  Returns +false+ if lock fails.
  #
  def mon_try_enter
    if @mon_owner != Thread.current
      unless @mon_mutex.try_lock
        return false
      end
      @mon_owner = Thread.current
      @mon_count = 0
    end
    @mon_count += 1
    return true
  end
  # For backward compatibility
  alias try_mon_enter mon_try_enter
    
        # set string on instance variable
    loaded = Marshal.load Marshal.dump @c2_a
    
      def setup
    super
    @locale = locale('fr')
    
        expected = doc(
      list(:NUMBER,
        item(nil, para('one')),
        item(nil, para('two'))))
    
      def setup
    super
    
        @hb = RDoc::Markup::HardBreak.new
  end
    
    task :add_template, [:name] do |t, args|
  Dir.glob('README.*') do |file|
    code = File.read(file)
    if code =~ /^===.*#{args.name.capitalize}/
      puts 'Already covered in #{file}'
    else
      template = code[/===[^\n]*Liquid.*index\.liquid<\/tt>[^\n]*/m]
      if !template
        puts 'Liquid not found in #{file}'
      else
        puts 'Adding section to #{file}'
        template = template.gsub(/Liquid/, args.name.capitalize).gsub(/liquid/, args.name.downcase)
        code.gsub! /^(\s*===.*CoffeeScript)/, '\n' << template << '\n\\1'
        File.open(file, 'w') { |f| f << code }
      end
    end
  end
end
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
      describe '#flare_tag' do
    it 'returns nil if there is no flare tag' do
      expect(described_class.new(article).tag).to be nil
    end
    
      describe 'POST /chat_channel_memberships' do
    it 'creates chat channel invitation' do
      user.add_role(:super_admin)
      mems_num = ChatChannelMembership.all.size
      post '/chat_channel_memberships', params: {
        chat_channel_membership: {
          user_id: second_user.id, chat_channel_id: chat_channel.id
        }
      }
      expect(ChatChannelMembership.all.size).to eq(mems_num + 1)
      expect(ChatChannelMembership.last.status).to eq('pending')
    end
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
      def update
    prevent_request_if_requested_twice
    @user = current_user
    @user.assign_attributes(user_params)
    @errors = []
    confirm_presence
    respond_to do |format|
      if @invalid_form
        render :edit
        return
      end
    
        # Disable testing because we don't really need to run the cpan tests. The
    # goal is to see the parsed result (name, module description, etc)
    # Additionally, it fails on my workstation when cpan_test? is enabled due
    # to not finding `Test.pm`, and it seems like a flakey test if we keep this
    # enabled.
    subject.attributes[:cpan_test?] = false
    subject.input('Digest::MD5')
    insist { subject.name } == 'perl-Digest-MD5'
    insist { subject.description } == 'Perl interface to the MD-5 algorithm'
    insist { subject.vendor } == 'Gisle Aas <gisle@activestate.com>'
    # TODO(sissel): Check dependencies
  end
    
        puts 'successfully created #{output}'
  end
ensure
  # defer cleanup until the end
  output_packages.each {|p| p.cleanup}
end

    
        # Manifest Filename
    manifest_fn = build_path('#{name}.p5m')
    
      # KNOWN ISSUE:
  # If an un-matched bracket is used in valid bash, as in
  # `echo '{'`, this function will choke.
  # However, to cover this case basically
  # requires writing almost half a bash parser,
  # and it is a very small corner case.
  # Otherwise, this approach is very robust.
  def gobble_function(cons,prod)
    level = 1
    while level > 0
      line = cons.next
      # Not the best, but pretty good
      # short of writing an *actual* sh
      # parser
      level += line.count '{'
      level -= line.count '}'
      if level > 0
        prod.push(line.rstrip())
      else
        fine = line.sub(/\s*[}]\s*$/, '')
        if !(fine =~ /^\s*$/)
          prod.push(fine.rstrip())
        end
      end
    end
  end # def gobble_function
    
      end
    
    Given /^I comment out lines that contain '([^']+)' in '([^']+)'$/ do |contains, glob|
  cd('.') do
    Dir.glob(glob).each do |file|
      transform_file(file) do |content|
        content.gsub(/^(.*?#{contains}.*?)$/) { |line| '# #{line}' }
      end
    end
  end
end