
        
          def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
    When /^I (?:log|sign) out$/ do
  logout
  step 'I go to the root page'
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      end
    
          if scanner.match?(/url\(/i)
        script_parser = Sass::Script::Parser.new(scanner, @line, to_parser_offset(offset), @options)
        str = script_parser.parse_string
    
        COLORS = {:red => 31, :green => 32, :yellow => 33}
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
          super
    end
    
          def load_built_in_scm
        require 'capistrano/scm/#{scm_name}'
        scm_class = Object.const_get(built_in_scm_plugin_class_name)
        # We use :load_immediately because we are initializing the SCM plugin
        # late in the load process and therefore can't use the standard
        # load:defaults technique.
        install_plugin(scm_class, load_immediately: true)
      end
    
          def fetch(key, default=nil, &block)
        fetched_keys << key unless fetched_keys.include?(key)
        peek(key, default, &block)
      end
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
    end
Liquid::Template.register_filter OctopressLiquidFilters