
        
              sets.map do |set|
        if valid?(set)
          ensure_time!(update_deprecated_types(set))
        else
          Jekyll.logger.warn 'Defaults:', 'An invalid front-matter default set was found:'
          Jekyll.logger.warn set.to_s
          nil
        end
      end.compact
    end
    
    unless File.exist?(PROF_OUTPUT_FILE)
  StackProf.run(
    mode: MODE.to_sym,
    interval: 100,
    raw: true,
    out: PROF_OUTPUT_FILE
  ) do
    puts 'GC Stats:', JSON.pretty_generate(GC.stat)
    GC.disable
    
    require 'json'
require 'open-uri'
    
        def deprecation_message(message)
      Jekyll.logger.warn 'Deprecation:', message
    end
    
          def parse(content)
        measure_time do
          @template = Liquid::Template.parse(content, :line_numbers => true)
        end
    
        # Spaceship is priority [higher -> lower]
    #
    # other - The class to be compared.
    #
    # Returns -1, 0, 1.
    def self.<=>(other)
      PRIORITIES[other.priority] <=> PRIORITIES[self.priority]
    end
    
    class SinatraStaticServer < Sinatra::Base
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    require 'cgi'
require 'digest/md5'
require 'net/https'
require 'uri'