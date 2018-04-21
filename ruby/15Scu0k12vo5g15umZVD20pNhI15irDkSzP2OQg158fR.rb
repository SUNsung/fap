
        
          # True if a {Formula} is being built with {Formula.devel} instead of {Formula.stable}.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def devel?
    include? 'devel'
  end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
          return false unless prune_time
    
        def find_remote!(username, domain)
      find_remote(username, domain) || raise(ActiveRecord::RecordNotFound)
    end
    
      task :ensure_id_sequences_exist do
    each_schema_load_environment do
      Mastodon::Snowflake.ensure_id_sequences_exist
    end
  end
end

    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
          # Parsed representation of code annotated with the `^^^ Message` style
      class AnnotatedSource
        ANNOTATION_PATTERN = /\A\s*\^+ /
    
      it 'registers an offense' do
    inspect_source(source)
    
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
    
          def initialize(agent)
        @agent = agent
        logger.debug('[api-service] start') if logger.debug?
      end