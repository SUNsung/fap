
        
            SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
            if at_css('.api-type-label.module')
          at_css('h1').content = subpath.remove('api/')
        end
    
            keys.find do |key|
          key_tag_version = tag_without_or_later(key)
          begin
            MacOS::Version.from_symbol(key_tag_version) <= tag_version
          rescue ArgumentError
            false
          end
        end
      end
    end
  end
end

    
      let(:specs) { {} }
  let(:name) { 'foo' }
  let(:url) { 'https://example.com/foo.tar.gz' }
  let(:version) { nil }
  let(:args) { %w[foo bar baz] }
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
          return if parent.nil?
    
            def initialize(machine, config)
          super
    
    describe VagrantPlugins::Chef::Cap::Windows::ChefInstalled do
  include_context 'unit'
    
          env[:box_url] = tf.path
      env[:box_provider] = ['virtualbox', 'vmware']
      expect(box_collection).to receive(:add).with(any_args) { |path, name, version, **opts|
        expect(checksum(path)).to eq(checksum(box_path))
        expect(name).to eq('foo/bar')
        expect(version).to eq('0.7')
        expect(opts[:metadata_url]).to eq('file://#{tf.path}')
        true
      }.and_return(box)
    
            it 'should not attempt to install a plugin' do
          expect(plugin_manager).not_to receive(:install_plugin)
          expect(instance.send(:process_configured_plugins)).to eq(local_installed_plugins)
        end
      end
    
      subject { described_class.new(loader, keys) }
    
      # Automatically discover new inputs in Rails' autoload path.
  # config.inputs_discovery = true
    
    
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
      it_behaves_like 'any rack application'
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
      it 'accepts post requests with correct X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => token)
    expect(last_response).to be_ok
  end
    
          context 'and :python_package_name_prefix is nil/default' do
        it 'should prefix the package with 'python-'' do
          subject.input(example_dir)
          insist { subject.name } == 'python-Example'
        end
      end
    
            insist { @rpmtags[:os] } == os
        insist { `rpm -q --qf '%{OS}' -p #{@target}`.chomp } == os
      end
    
        it 'should support specifying confinement' do
      pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
      original.attributes[:snap_confinement] = 'test-confinement'
    
                # ensure it doesn't end with a slash
            if(full_record_path[full_record_path.length-1] == '/')
              full_record_path = full_record_path.chop()
            end
          else
            extension_data = hash_record(data)
          end
    
      # Take a flat package as input
  def input(input_path)
    # TODO: Fail if it's a Distribution pkg or old-fashioned
    expand_dir = File.join(build_path, 'expand')
    # expand_dir must not already exist for pkgutil --expand
    safesystem('pkgutil --expand #{input_path} #{expand_dir}')
    
        # Manifest Filename
    manifest_fn = build_path('#{name}.p5m')