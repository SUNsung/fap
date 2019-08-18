
        
            def list_missing_uploads(skip_optimized: false)
      not_implemented
    end
    
      def messages_for_user
    base_messages
      .joins('
        LEFT JOIN topic_allowed_users ta
        ON topics.id = ta.topic_id
        AND ta.user_id = #{@user.id.to_i}
      ')
      .where('ta.topic_id IS NOT NULL')
  end
    
          expect(headers['X-Queue-Time']).to eq('60.000000')
    
        claimed_topics = ReviewableClaimedTopic.claimed_hash(reviewables.map { |r| r.topic_id }.uniq)
    
      context 'removal from s3' do
    before do
      SiteSetting.s3_region = 'us-west-1'
      SiteSetting.s3_upload_bucket = 's3-upload-bucket'
      SiteSetting.s3_access_key_id = 's3-access-key-id'
      SiteSetting.s3_secret_access_key = 's3-secret-access-key'
      SiteSetting.enable_s3_uploads = true
    end
    
        topic_view = TopicView.new(topic, user, post_ids: [post.id])
    
      it 'works when default_locale is English' do
    SiteSetting.default_locale = :en
    
        stub_request(:get, 'https://bob.s3.amazonaws.com/?lifecycle').
      to_return(status: 200, body: @lifecycle, headers: {})
    
            @path = File.expand_path(path)
        podspec_content = File.read(path)
    
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
    
          def self.author
        'lmirosevic'
      end
    
          attr_mapping({
        'deviceId' => :id,
        'name' => :name,
        'deviceNumber' => :udid,
        'devicePlatform' => :platform,
        'status' => :status,
        'deviceClass' => :device_type,
        'model' => :model
      })
    
              # Store the number in the shared hash
          Actions.lane_context[SharedValues::BUILD_NUMBER] = build_number
        end
        return build_number
      rescue => ex
        return false if params[:hide_error_when_versioning_disabled]
        UI.error('Before being able to increment and read the version number from your Xcode project, you first need to setup your project properly. Please follow the guide at https://developer.apple.com/library/content/qa/qa1827/_index.html')
        raise ex
      end
    
            # Maps nice developer param names to Shenzhen's `ipa build` arguments
        params.collect do |k, v|
          v ||= ''
          if ARGS_MAP[k]
            if k == :clean
              v == true ? '--clean' : '--no-clean'
            elsif k == :archive
              v == true ? '--archive' : '--no-archive'
            else
              value = (v.to_s.length > 0 ? '\'#{v}\'' : '')
              '#{ARGS_MAP[k]} #{value}'.strip
            end
          end
        end.compact
      end
    
          def self.authors
        ['KrauseFx']
      end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
      describe 'path request must exist' do
    it 'should check that validation added if path does not exist' do
      opts = @opts.tap { |o| o.delete('path') }
      @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => opts)
      @checker.user = users(:bob)
      expect(@checker.save).to eq false
      expect(@checker.errors.full_messages.first).to eq('You need to specify a path request')
    end
  end
    
    class SoftwareSpec
  undef uses_from_macos
    
          expect(f.class.stable.deps.first.name).to eq('foo')
      expect(f.class.devel.deps.first.name).to eq('foo')
      expect(f.class.head.deps.first.name).to eq('foo')
    end
  end
end

    
        it 'sets the name' do
      subject.owner = owner
      expect(subject.name).to eq(owner.name)
    end
  end
    
        # See these issues for some history:
    #
    # - https://github.com/Homebrew/legacy-homebrew/issues/13
    # - https://github.com/Homebrew/legacy-homebrew/issues/41
    # - https://github.com/Homebrew/legacy-homebrew/issues/48
    def macports_or_fink
      paths = []
    
          # The original Mavericks CLT package ID
      EXECUTABLE_PKG_ID = 'com.apple.pkg.CLTools_Executables'
      MAVERICKS_NEW_PKG_ID = 'com.apple.pkg.CLTools_Base' # obsolete
      PKG_PATH = '/Library/Developer/CommandLineTools'
      HEADER_PKG_PATH =
        '/Library/Developer/CommandLineTools/Packages/macOS_SDK_headers_for_macOS_:macos_version.pkg'
      HEADER_PKG_ID = 'com.apple.pkg.macOS_SDK_headers_for_macOS_10.14'
    
        context 'when URL ends with file' do
      it {
        expect(subject).to eq(
          HOMEBREW_CACHE/'downloads/3d1c0ae7da22be9d83fb1eb774df96b7c4da71d3cf07e1cb28555cf9a5e5af70--foo.tar.gz',
        )
      }
    end
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
        attr_reader :force
    attr_accessor :downloaded_path
    
      spec.summary       = %q{Provides access to information typically stored in UNIX /etc directory.}
  spec.description   = spec.summary
  spec.homepage      = 'https://github.com/ruby/etc'
  spec.license       = 'BSD-2-Clause'
    
          def test_on_event
        exec_notification_query_async
        ev = WIN32OLE_EVENT.new(@sws, 'ISWbemSinkEvents')
        ev.on_event {|*args| default_handler(*args)}
        message_loop(:@event)
        assert_match(/OnObjectReady/, @event)
      end
    
        def initialize(dllname, func, import, export = '0', calltype = :stdcall)
      @proto = [import].join.tr(WIN32_TYPES, DL_TYPES).sub(/^(.)0*$/, '\1')
      import = @proto.chars.map {|win_type| TYPEMAP[win_type.tr(WIN32_TYPES, DL_TYPES)]}
      export = TYPEMAP[export.tr(WIN32_TYPES, DL_TYPES)]
      calltype = Fiddle::Importer.const_get(:CALL_TYPE_TO_ABI)[calltype]
    
      it 'increments position' do
    gz = Zlib::GzipReader.new @io
    (0..@data.size).each do |i|
      gz.pos.should == i
      gz.getc
    end
  end
    
      it 'resets the position of the stream pointer to data previously read' do
    gz = Zlib::GzipReader.new @io
    first_read = gz.read
    gz.rewind
    first_read.should == gz.read
  end
    
      it 'handles inputs of 2^23 bytes' do
    input = '.'.b * (2 ** 23)
    
    describe 'Zlib::Inflate#finish' do
    
        require 'capistrano/scm/#{scm_name}'
    install_plugin #{built_in_scm_plugin_class_name}