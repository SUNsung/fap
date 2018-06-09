
        
              # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
              o.on('--check', 'Only checks for a capability, does not execute') do |f|
            options[:check] = f
          end
        end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
        # Returns a deep copy of this query list and all its children.
    #
    # @return [QueryList]
    def deep_copy
      QueryList.new(queries.map {|q| q.deep_copy})
    end
  end
    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end

    
      # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end