
        
                File.open(@path, 'w') { |file| file.puts(updated_podspec_content) } unless Helper.test?
    
          context 'with appendix' do
        it 'returns the current version once parsed with appendix' do
          test_content = 'spec.version = '1.3.2.4''
          result = @version_podspec_file.parse(test_content)
          expect(result).to eq('1.3.2.4')
          expect(@version_podspec_file.version_value).to eq('1.3.2.4')
          expect(@version_podspec_file.version_match[:major]).to eq('1')
          expect(@version_podspec_file.version_match[:minor]).to eq('3')
          expect(@version_podspec_file.version_match[:patch]).to eq('2')
          expect(@version_podspec_file.version_match[:appendix]).to eq('.4')
        end
    
          it 'returns true for enterprise accounts' do
        PortalStubbing.adp_stub_multiple_teams
    
            unless Snapshot.cache[:result_bundle_path][language_key]
          path = File.join(Snapshot.config[:output_directory], 'test_output', language_key, Snapshot.config[:scheme]) + '.test_result'
          if File.directory?(path)
            FileUtils.remove_dir(path)
          end
          Snapshot.cache[:result_bundle_path][language_key] = path
        end
        return Snapshot.cache[:result_bundle_path][language_key]
      end
    
          def self.find_api_token(params)
        return if params[:gsp_path]
        unless params[:api_token].to_s.length > 0
          Dir['./**/Info.plist'].each do |current|
            result = Actions::GetInfoPlistValueAction.run(path: current, key: 'Fabric')
            next unless result
            next unless result.kind_of?(Hash)
            params[:api_token] ||= result['APIKey']
            UI.verbose('found an APIKey in #{current}')
          end
        end
      end
    
              if method_called_ever?(body_node, :virtualenv_create) ||
             method_called_ever?(body_node, :virtualenv_install_with_resources)
            find_method_with_args(body_node, :resource, 'setuptools') do
              problem 'Formulae using virtualenvs do not need a `setuptools` resource.'
            end
          end
    
          path = if timestamp == :latest
        Pathname.glob(metadata_versioned_path(version: version).join('*')).max
      else
        timestamp = new_timestamp if timestamp == :now
        metadata_versioned_path(version: version).join(timestamp)
      end
    
          def <=>(other)
        @comparison_cache.fetch(other) do
          v = SYMBOLS.fetch(other) { other.to_s }
          @comparison_cache[other] = super(Version.new(v))
        end
      end
    
    require 'extend/optparse'
    
      it_behaves_like 'a command that requires a Cask token'
  it_behaves_like 'a command that handles invalid options'
    
        ARGV.formulae.each do |f|
      bintray_package = Utils::Bottles::Bintray.package f.name
      bintray_repo_url = 'https://api.bintray.com/packages/homebrew/mirror'
      package_url = '#{bintray_repo_url}/#{bintray_package}'
    
        # use Feedbag as a backup to Google Feeds Api
    if rss_url.nil?
      rss_url = Feedbag.find(web_url).first
      if rss_url.nil?
        suggested_paths = ['/rss', '/feed', '/feeds', '/atom.xml', '/feed.xml', '/rss.xml', '.atom']
        suggested_paths.each do |suggested_path|
          rss_url = Feedbag.find('#{web_url.chomp('/')}#{suggested_path}').first
          break if rss_url
        end
      end
    end
  end
    
          def add_claims_to_scopes
        return unless params[:claims]
        claims_json = JSON.parse(params[:claims])
        return unless claims_json
        claims_array = claims_json['userinfo'].try(:keys)
        return unless claims_array
        req = build_rack_request
        claims = claims_array.unshift(req[:scope]).join(' ')
        req.update_param('scope', claims)
      end
    
          def find
        client = Api::OpenidConnect::OAuthApplication.find_by(client_name: params[:client_name])
        if client
          render json: {client_id: client.client_id}
        else
          render json: {error: 'Client with name #{params[:client_name]} does not exist'}
        end
      end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      def contacts_data
    current_user.contacts.mutual.joins(person: :profile)
      .pluck(*%w(contacts.id profiles.first_name profiles.last_name people.diaspora_handle))
      .map {|contact_id, *name_attrs|
        {value: contact_id, name: ERB::Util.h(Person.name_from_attrs(*name_attrs)) }
      }
  end
end

    
        redirect_to stream_path
  end
end

    
        opts = params.require(:message).permit(:text)
    message = current_user.build_message(conversation, opts)
    
      def read_all
    current_type = types[params[:type]]
    notifications = Notification.where(recipient_id: current_user.id, unread: true)
    notifications = notifications.where(type: current_type) if params[:type]
    notifications.update_all(unread: false)
    respond_to do |format|
      if current_user.unread_notifications.count > 0
        format.html { redirect_to notifications_path }
        format.mobile { redirect_to notifications_path }
      else
        format.html { redirect_to stream_path }
        format.mobile { redirect_to stream_path }
      end
      format.xml { render :xml => {}.to_xml }
      format.json { render :json => {}.to_json }
    end
  end
    
        # control tar.
    begin
      write_pkginfo(control_path)
      write_control_scripts(control_path)
      tar_path(control_path, controltar_path)
    ensure
      FileUtils.rm_r(control_path)
    end
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
        if self.attributes[:osxpkg_payload_free?]
      args << '--nopayload'
    else
      args += ['--root', staging_path]
    end
    
      def output(output_path)
    
    # Fixup the category to an acceptable solaris category
    case @category
    when nil, 'default'
      @category = 'Applications/System Utilities'
    end
    
    end
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
        private
    
        def tmux_window_command_prefix
      '#{project.tmux} send-keys -t #{project.name}:#{index + project.base_index}'
    end
    
      context 'hook value is Array' do
    before do
      project.yaml[hook_name] = [
        'echo 'on hook'',
        'echo 'another command here''
      ]
    end
    
      subject { instance }
    
            it 'sets force_attach to true when 'attach: true' is provided' do
          project = described_class.new.create_project(attach: true,
                                                       name: name)
          expect(project.force_attach).to eq(true)
        end
    
            expect(described_class.directories).to eq ['TMUXINATOR_CONFIG']
      end
    end
  end