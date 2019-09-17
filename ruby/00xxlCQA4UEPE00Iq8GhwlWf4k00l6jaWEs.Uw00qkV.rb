
        
          def two
    render xml: Model.new
  end
end
    
      def test_adding_csv_rendering_via_renderers_add
    ActionController::Renderers.add :csv do |value, options|
      send_data value.to_csv, type: Mime[:csv]
    end
    @request.accept = 'text/csv'
    get :respond_to_mime, format: 'csv'
    assert_equal Mime[:csv], @response.media_type
    assert_equal 'c,s,v', @response.body
  ensure
    ActionController::Renderers.remove :csv
  end
end

    
        self.notifier = Fanout.new
  end
end

    
            def ref
          @symbol
        end
        alias to_sym ref
    
          def with_block
        render inline: 'Hello <%= helpery_test %>'
      end
    
    module Spaceship
  module Tunes
    # Represents an image hosted on App Store Connect. Used for app store review attachment file.
    class AppReviewAttachment < TunesBase
      HOST_URL = 'https://iosapps-ssl.itunes.apple.com/itunes-assets'
    
            return build_settings
      end
    
      describe '#disable' do
    it 'finds a device by its ID and disables it' do
      device = Spaceship::Device.find('AAAAAAAAAA')
      expect(device.status).to eq('c')
      expect(device.enabled?).to eq(true)
      device.disable!
      expect(device.status).to eq('r')
      expect(device.enabled?).to eq(false)
    end
    it 'finds a device by its ID and enables it' do
      device = Spaceship::Device.find('DISABLED_B', include_disabled: true)
      expect(device.status).to eq('r')
      expect(device.enabled?).to eq(false)
      device.enable!
      expect(device.status).to eq('c')
      expect(device.enabled?).to eq(true)
    end
  end
end

    
          def self.output
      end
    
          def_node_matcher :find_output_method, <<-PATTERN
        (defs (self) :output ...)
      PATTERN
    
          describe 'without options' do
        it 'could not find file' do
          expect(UI).to receive(:important).with('To not be asked about this value, you can specify it using 'json_key'')
          expect(UI).to receive(:input).with(anything).and_return('not_a_file')
          expect(UI).to receive(:user_error!).with(/Could not find service account json file at path*/).and_raise('boom')
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
      # Get the title for the page.
  #
  # @param [Middleman::Page] page
  #
  # @return [String]
  def title_for(page)
    if page && page.data.page_title
      return '#{page.data.page_title} - Vagrant by HashiCorp'
    end
    
        it 'returns matching entries if they exist' do
      matching = new_entry(name, provider.to_s, version)
      index << new_entry('foo', 'bar', '1.0')
      index << matching
      index << new_entry('foo', 'baz', '1.2')
    
          # Sort the usable providers by priority. Higher numbers are higher
      # priority, otherwise alpha sort.
      usable = usable.sort {|a, b| a[0] == b[0] ? a[1] <=> b[1] : b[0] <=> a[0]}
                      .map {|prio, key| key}
      @logger.debug('Priority sorted usable provider list: #{usable}')
    
      describe 'current working directory' do
    it 'is the cwd by default' do
      Dir.mktmpdir('vagrant-test-env-cwd-default') do |temp_dir|
        Dir.chdir(temp_dir) do
          with_temp_env('VAGRANT_CWD' => nil) do
            expect(described_class.new.cwd).to eq(Pathname.new(Dir.pwd))
          end
        end
      end
    end
    
                if on_error == :halt
              @logger.debug('Trigger run encountered an error. Halting on error...')
              raise e
            else
              @logger.debug('Trigger run encountered an error. Continuing on anyway...')
              @machine.ui.error(e.message)
            end
          end
        end
    
          it 'executes SSH in a subprocess with options and returns an exit code Fixnum' do
        # mock out ChildProcess
        process = double()
        allow(ChildProcess).to receive(:build).and_return(process)
        allow(process).to receive(:io).and_return(true)
        allow(process.io).to receive(:inherit!).and_return(true)
        allow(process).to receive(:start).and_return(true)
        allow(process).to receive(:wait).and_return(true)
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
        describe '#public' do
      it 'succeeds' do
        get :public
        expect(response).to be_success
      end
    end
    
    # test/spec/mini 3
# http://gist.github.com/25455
# chris@ozmm.org
# file:lib/test/spec/mini.rb
def context(*args, &block)
  return super unless (name = args.first) && block
  require 'test/unit'
  klass = Class.new(defined?(ActiveSupport::TestCase) ? ActiveSupport::TestCase : Test::Unit::TestCase) do
    def self.test(name, &block)
      define_method('test_#{name.gsub(/\W/, '_')}', &block) if block
    end
    
        assert_match /Edit Page/,             last_response.body, ''Edit Page' link is blocked in compare template'
    assert_match /Revert Changes/,        last_response.body, ''Revert Changes' link is blocked in compare template'
  end
    
        @wiki.clear_cache
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
    #############################################################################
#
# Custom tasks (add your own tasks here)
#
#############################################################################
    
    # external
require 'github/markup'
require 'sanitize'
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end