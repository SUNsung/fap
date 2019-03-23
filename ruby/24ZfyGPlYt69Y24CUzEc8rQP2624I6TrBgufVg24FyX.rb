
        
                  def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
        def compact
      PathSet.new paths.compact
    end
    
          out  = 'Missing #{template_type} #{searched_paths.join(', ')} with #{details.inspect}. Searched in:\n'
      out += paths.compact.map { |p| '  * #{p.to_s.inspect}\n' }.join
      super out
    end
  end
    
      class ImageTag < Liquid::Tag
    @img = nil
    
      # Returns a url without the protocol (http://)
  def shorthand_url(input)
    input.gsub /(https?:\/\/)(\S+)/ do
      $2
    end
  end