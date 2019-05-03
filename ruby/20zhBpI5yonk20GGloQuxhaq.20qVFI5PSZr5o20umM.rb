
        
                class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
          cattr_accessor :type_klass
    
          def test_helpers_with_block
        @controller.process(:with_block)
        assert_equal 'Hello World', @controller.response_body
      end
    
          # A single page of data and the corresponding page number.
      Page = Struct.new(:objects, :number)
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
          # Returns the database ID for the object.
      #
      # This method will return `nil` if no ID could be found.
      def database_id
        val = Caching.read(cache_key)
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            def labels?
          label_names && label_names.any?
        end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
        def to_json
      JSON.generate(as_json)
    end
    
        def at_css(*args)
      doc.at_css(*args)
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
        def dependencies
      @dependencies ||= [Cask::CaskLoader.load('adobe-air')]
    end
    
        def role(name, hosts, options={})
      if name == :all
        raise ArgumentError, '#{name} reserved name for role. Please choose another name'
      end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
    # Now, add our init-scripts, systemd services, and so on:
pleaserun = package.convert(FPM::Package::PleaseRun)
pleaserun.input ['/usr/bin/my-executable', '--foo-from', 'bar']
    
    class FPM::Package::Puppet < FPM::Package
  def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -m}.chomp
    end
    return @architecture
  end # def architecture
    
        logger.debug('Running command', :args => args2)