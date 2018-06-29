
        
          def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
      attr_reader :user
    
          next if path.symlink? || path.directory?
    
          def warn_for_unknown_directives(directives)
        unknown_keys = directives.keys - ORDERED_DIRECTIVES
        return if unknown_keys.empty?
        opoo %Q(Unknown arguments to #{stanza} -- #{unknown_keys.inspect}. Running 'brew update; brew cleanup; brew cask cleanup' will likely fix it.)
      end
    
          def extract_mount(mount)
        Tempfile.open(['', '.bom']) do |bomfile|
          bomfile.close
    
    module Capistrano
  module TaskEnhancements
    def before(task, prerequisite, *args, &block)
      prerequisite = Rake::Task.define_task(prerequisite, *args, &block) if block_given?
      Rake::Task[task].enhance [prerequisite]
    end
    
        # @abstract
    #
    # Your implementation should check the existence of a cache repository on
    # the deployment target
    #
    # @return [Boolean]
    #
    def test
      raise NotImplementedError, 'Your SCM strategy module should provide a #test method'
    end
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy

    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
      end
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
    
module OctopressLiquidFilters
    
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
    
      context 'symmetrical style' do
    let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }
    
          # The name of the defined method as a symbol.
      #
      # @return [Symbol] the name of the defined method
      def method_name
        node_parts[2]
      end