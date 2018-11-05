
        
        require 'benchmark/ips'
require 'pathutil'
    
    STDOUT.sync = true
    
          def feature_element_timing_key(feature_element)
        '\'#{feature_element.name}\' (#{feature_element.location})'
      end
    
    def run_jekyll(args)
  args = args.strip.split(' ') # Shellwords?
  process = run_in_shell('ruby', Paths.jekyll_bin.to_s, *args, '--trace')
  process.exitstatus.zero?
end
    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
            def setup
          @config['syntax_highlighter'] ||= highlighter
          @config['syntax_highlighter_opts'] ||= {}
          @config['coderay'] ||= {} # XXX: Legacy.
          modernize_coderay_config
          make_accessible
        end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
            staff.topic_id = post.topic.id
        unless staff.save
          puts staff.errors.full_messages
          puts 'Failed to set the Staff category description topic!'
        end
    
        describe 'with block' do
      it 'returns a nav link with menu' do
        stub(self).current_page?('/things') { false }
        stub(self).current_page?('/things/stuff') { false }
        nav = nav_link('Things', '/things') { nav_link('Stuff', '/things/stuff') }
        expect(nav).to be_html_safe
        a0 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > a[href='/things']')
        expect(a0).to be_a Nokogiri::XML::Element
        expect(a0.text.strip).to eq('Things')
        a1 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > li:not(.active) > a[href='/things/stuff']')
        expect(a1).to be_a Nokogiri::XML::Element
        expect(a1.text.strip).to eq('Stuff')
      end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
        def stylesheets_path
      File.join assets_path, 'stylesheets'
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    Given /^I am signed in( on the mobile website)?$/ do |mobile|
  automatic_login
  confirm_login mobile
end
    
    module UserCukeHelpers
    
          it 'doesn't post' do
        expect(alice).not_to receive(:like!)
        post :create, params: like_hash
        expect(response.code).to eq('422')
      end
    end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
            current_rule
      end
      root.children.compact!
      root.children.uniq!
    
          it 'autocorrects closing brace on same line from last element' do
        new_source = autocorrect_source(construct(true, false))
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode