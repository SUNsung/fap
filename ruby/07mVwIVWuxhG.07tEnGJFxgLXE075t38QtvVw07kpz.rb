
        
                def test_url_port
          spec = resolve 'abstract://foo:123?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'port'     => 123,
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
      def test_serialized_attribute_with_class_constraint
    settings = { 'color' => 'blue' }
    Topic.serialize(:content, Hash)
    topic = Topic.new(content: settings)
    assert topic.save
    assert_equal(settings, Topic.find(topic.id).content)
  end
    
      test 'overriding has_many_attached methods works' do
    # attach blobs before messing with getter, which breaks `#attach`
    @user.highlights.attach create_blob(filename: 'funky.jpg'), create_blob(filename: 'wonky.jpg')
    
        topic.replies.delete(topic.replies.first)
    topic.reload
    assert_equal topic.replies.to_a.size, topic.replies_count
  end
    
      def test_unsubscribe_client
    with_puma_server do |port|
      app = ActionCable.server
      identifier = JSON.generate(channel: 'ClientTest::EchoChannel')
    
          assert_not connection.connected
      assert_equal [], @server.connections
    end
  end
    
          assert_not_called(@connection.websocket, :close) do
        @connection.process_internal_message 'type' => 'unknown'
      end
    end
  end
    
        def self.git_log_last_commits(pretty_format, commit_count, merge_commit_filtering, date_format = nil, ancestry_path)
      command = ['git log']
      command << '--pretty=\'#{pretty_format}\''
      command << '--date=\'#{date_format}\'' if date_format
      command << '--ancestry-path' if ancestry_path
      command << '-n #{commit_count}'
      command << git_log_merge_commit_filtering_option(merge_commit_filtering)
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
          it 'splits correctly' do
        expected = ['One', 'Two', 'Three', 'Four Token']
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
    
        context 'GIT-SVN repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(true)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(false)
      end
    
    public_dir      = 'public'    # compiled site directory
source_dir      = 'source'    # source file directory
blog_index_dir  = 'source'    # directory for your blog's index page (if you put your index in source/blog/index.html, set this to 'source/blog')
deploy_dir      = '_deploy'   # deploy directory (for Github pages deployment)
stash_dir       = '_stash'    # directory to stash posts for speedy generation
posts_dir       = '_posts'    # directory for blog files
themes_dir      = '.themes'   # directory for blog files
new_post_ext    = 'markdown'  # default new post file extension when using the new_post task
new_page_ext    = 'markdown'  # default new page file extension when using the new_page task
server_port     = '4000'      # port for preview server eg. localhost:4000
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''