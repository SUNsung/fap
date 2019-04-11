
        
          def set_account
    @account = Account.find(params[:id])
  end
end

    
        weeks
  end
    
      def to_str
    @paths.join(File::PATH_SEPARATOR)
  end
  alias to_s to_str
    
      def path
    HOMEBREW_PINNED_KEGS/@f.name
  end
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
        attr_reader :local_file
    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
    end
    
    
  # Adds some extra filters used during the category creation process.
  module Filters
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end