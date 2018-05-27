class TestPageWithoutAFile < JekyllUnitTest
  def setup_page(*args, base: source_dir, klass: PageWithoutAFile)
    dir, file = args
    if file.nil?
      file = dir
      dir = ''
    end
    klass.new(@site, base, dir, file)
  end
    
    def fixture_site(overrides = {})
  Jekyll::Site.new(site_configuration(overrides))
end
    
      protected
    
        it 'tracks when sign in is older than one day' do
      user.update(current_sign_in_at: 2.days.ago)
      sign_in user, scope: :user
      get :show
    
      def display
    'standalone'
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
    
        def get_cache_file_for(gist, file)
      bad_chars = /[^a-zA-Z0-9\-_.]/
      gist      = gist.gsub bad_chars, ''
      file      = file.gsub bad_chars, ''
      md5       = Digest::MD5.hexdigest '#{gist}-#{file}'
      File.join @cache_folder, '#{gist}-#{file}-#{md5}.cache'
    end
    
    require './plugins/pygments_code'
require './plugins/raw'
require 'pathname'
    
    module Jekyll
    
            def reference!(node)
          @references << node
          @referenced = true
        end
    
            # @param annotated_source [String] string passed to the matchers
        #
        # Separates annotation lines from source lines. Tracks the real
        # source line number that each annotation corresponds to.
        #
        # @return [AnnotatedSource]
        def self.parse(annotated_source)
          source      = []
          annotations = []
    
        expect(corrected).to eq(''something'.to_sym')
  end
end

    
            context 'source with constants' do
          let(:source) do
            <<-RUBY.strip_indent
              #{type} Parent
                #{type} SomeObject
                  URL = %q(http://example.com)
                  def do_something
                  end
                end
              end
            RUBY
          end