
        
            If you wish to use the 2.x release you can install it
    either via Homebrew:
      brew install homebrew/binary/ngrok2
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      # True if a {Formula} is being built universally.
  # e.g. on newer Intel Macs this means a combined x86_64/x86 binary/library.
  # <pre>args << '--universal-binary' if build.universal?</pre>
  def universal?
    include?('universal') && option_defined?('universal')
  end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
        unless updated_taps.empty?
      puts 'Updated #{updated_taps.size} tap#{plural(updated_taps.size)} ' \
           '(#{updated_taps.join(', ')}).'
      updated = true
    end
    
      def self.class_s(name)
    Formulary.class_s(name)
  end
    
            if entries.empty?
          css('.quickindex[id]').each do |node|
            name = node['id'].remove(/quickindex\.?/)
            next if name.empty? || name =~ /\.\d+\z/ || name =~ /\A([^\.]+)\.\1\z/
            entries << ['#{self.name}.#{name}', name]
          end
        end
    
          options[:only_patterns] = [/\Agetting-started\//, /\Alayout\//, /\Acontent\//, /\Acomponents\//, /\Autilities\//, /\Amigration\//]
    end
    
        options[:attribution] = <<-HTML
      &copy; Django Software Foundation and individual contributors<br>
      Licensed under the BSD License.
    HTML
    
    module Docs
  class Tensorflow < UrlScraper
    self.name = 'TensorFlow'
    self.type = 'tensorflow'
    self.release = '1.8'
    self.root_path = 'index.html'
    self.links = {
      home: 'https://www.tensorflow.org/',
      code: 'https://github.com/tensorflow/tensorflow'
    }
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
      Sass::Plugin.options.merge!(config)
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end