
        
            def download_url(upload)
      not_implemented
    end
    
        it 'should work with trailing slash url' do
      Discourse::Utils.expects(:execute_command).with('git', 'clone', url, @temp_folder)
    
          result
    end
  end
    
        def file_regex
      @file_regex ||= begin
        path = @s3_helper.s3_bucket_folder_path || ''
    
      context 'S3 specific behavior' do
    before { create_backups }
    after(:all) { remove_backups }
    
    require_dependency 'reviewable_score_type_serializer'
    
      def process_message(message)
    begin
      @last_message_processed = message.global_id
      MessageBus.on_connect.call(message.site_id)
      refresh!
    ensure
      MessageBus.on_disconnect.call(message.site_id)
    end
  end
    
        context 'similar activity' do
      let!(:hottest_topic1) { Fabricate(:topic, views: 3530, posts_count: 100, like_count: 201) }
      let!(:hottest_topic2) { Fabricate(:topic, views: 3530, posts_count: 100, like_count: 201) }
      let!(:warm_topic1) { Fabricate(:topic, views: 2020, posts_count: 100, like_count: 99) }
      let!(:warm_topic2) { Fabricate(:topic, views: 2020, posts_count: 100, like_count: 99) }
      let!(:warm_topic3) { Fabricate(:topic, views: 2020, posts_count: 100, like_count: 99) }
      let!(:lukewarm_topic1) { Fabricate(:topic, views: 1010, posts_count: 100, like_count: 51) }
      let!(:lukewarm_topic2) { Fabricate(:topic, views: 1010, posts_count: 100, like_count: 51) }
      let!(:lukewarm_topic3) { Fabricate(:topic, views: 1010, posts_count: 100, like_count: 51) }
      let!(:lukewarm_topic4) { Fabricate(:topic, views: 1010, posts_count: 100, like_count: 51) }
      let!(:cold_topic) { Fabricate(:topic, views: 100, posts_count: 100, like_count: 1) }
    
        it 'an invalid rebuild statement' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          bottle do
            rebuild 0
            ^^^^^^^^^ 'rebuild 0' should be removed
            sha256 'fe0679b932dd43a87fd415b609a7fbac7a069d117642ae8ebaac46ae1fb9f0b3' => :sierra
          end
        end
      RUBY
    end
    
    class Bottle
  class Filename
    attr_reader :name, :version, :tag, :rebuild
    
            uses_from_macos('foo', after: :mojave)
      end
    
          def detect_version
        version = nil
        [EXECUTABLE_PKG_ID, MAVERICKS_NEW_PKG_ID].each do |id|
          next unless File.exist?('#{PKG_PATH}/usr/bin/clang')
    
      it 'properly handles Casks that are not present' do
    expect {
      described_class.run('notacask')
    }.to raise_error(Cask::CaskUnavailableError)
  end
end

    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end
    
        def setup_filters
      @filters = cmdline_filters
      @filters += @custom_filters if @custom_filters
      @filters << Filter.new(:role, ENV['ROLES']) if ENV['ROLES']
      @filters << Filter.new(:host, ENV['HOSTS']) if ENV['HOSTS']
      fh = fetch_for(:filter, {}) || {}
      @filters << Filter.new(:host, fh[:hosts]) if fh[:hosts]
      @filters << Filter.new(:role, fh[:roles]) if fh[:roles]
      @filters << Filter.new(:host, fh[:host]) if fh[:host]
      @filters << Filter.new(:role, fh[:role]) if fh[:role]
    end
    
          def self.[](host)
        host.is_a?(Server) ? host : new(host)
      end
    
        def URIEncodeOctets(octets, result, index)
      if (@@hexCharCodeArray == 0)
        @@hexCharCodeArray = [48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                              65, 66, 67, 68, 69, 70];
      end
      index = URIAddEncodedOctetToBuffer(octets[0], result, index);
      if (octets[1]);
        index = URIAddEncodedOctetToBuffer(octets[1], result, index)
      end
      if (octets[2]);
        index = URIAddEncodedOctetToBuffer(octets[2], result, index)
      end
      if (octets[3]);
        index = URIAddEncodedOctetToBuffer(octets[3], result, index)
      end
      return index;
    end
    
          def editable
        @editable
      end
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
        @wiki.update_page(@wiki.page('PG'), nil, nil, '다른 text', {})
    page = @wiki.page('PG')
    assert_equal '다른 text', utf8(page.raw_data)
    
    # Set ruby to UTF-8 mode
# This is required for Ruby 1.8.7 which gollum still supports.
$KCODE = 'U' if RUBY_VERSION[0, 3] == '1.8'