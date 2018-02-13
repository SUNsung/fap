
        
            def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
              # Underscore methods
          if name.start_with?('Underscore')
            node.at_css('~ ul').css('li').each do |li|
              name = [type.downcase, li.at_css('a').content.split.first].join('.')
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type]
            end
            next
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
    
              it 'returns all release servers that match the property filter' do
            expect(subject.map(&:hostname)).to eq %w{example1.com example3.com}
          end
        end
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny