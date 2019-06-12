
        
              it 'adds docset_feed_url param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_feed_url: 'http://docset-feed-url.com'
          )
        end').runner.execute(:test)
    
    class Array
  def shelljoin
    CrossplatformShellwords.shelljoin(self)
  end
end
    
            it 'sets up screenshots folder in current folder' do
          expect(options[:screenshots_path]).to eq('./screenshots')
        end
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  if File.exist?(OUTPUT_FILENAME)
    xml = Nokogiri::XML(File.open(OUTPUT_FILENAME))
    existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first
    if existing_blog
      rss_url = existing_blog.attr('xmlUrl')
      puts '#{name}: ALREADY HAVE'
    end
  end
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
      # Setup a color scheme called 'bright' than can be used to add color codes
  # to the pattern layout. Color schemes should only be used with appenders
  # that write to STDOUT or STDERR; inserting terminal color codes into a file
  # is generally considered bad form.
  Logging.color_scheme('bright',
                       levels:  {
                         info:  :green,
                         warn:  :yellow,
                         error: :red,
                         fatal: %i(white on_red)
                       },
                       date:    :blue,
                       logger:  :cyan,
                       message: :magenta
                      )
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
        it 'should redirect back in the mobile version if it has 0 notifications' do
      FactoryGirl.create(:notification, recipient: alice, type: 'Notifications::StartedSharing')
      get :read_all, params: {type: 'started_sharing'}, format: :mobile
      expect(response).to redirect_to(stream_path)
    end
    
        it 'redirects to /stream for a mobile user' do
      request.headers['X_MOBILE_DEVICE'] = true
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
  end
    
    group :debugging do
  gem 'cocoapods_debug'
    
    ENV['COCOAPODS_DISABLE_STATS'] = 'true'

    
              ignored_end_pos = if ignored_loc.respond_to?(:heredoc_body)
                              ignored_loc.heredoc_end.end_pos
                            else
                              ignored_loc.expression.end_pos
                            end
          ignored_end_pos >= node.source_range.end_pos
        end
      end
    
              augmentation = if scope.node.lambda?
                           message_for_lambda(variable, all_arguments)
                         else
                           message_for_normal_block(variable, all_arguments)
                         end