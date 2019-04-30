
        
                # Fix the order of receivers
        @agents.each do |agent|
          stub.proxy(agent).receivers { |orig| orig.order(:id) }
        end
      end
    
              valid_parsed_trigger_agent_data.each do |key, value|
            if key == :type
              value = value.split('::').last
            end
            expect(trigger_agent_diff).to respond_to(key)
            field = trigger_agent_diff.send(key)
            expect(field).to be_a(ScenarioImport::AgentDiff::FieldDiff)
            expect(field.incoming).to eq(value)
            expect(field.updated).to eq(value)
            expect(field.current).to be_nil
          end
          expect(trigger_agent_diff).not_to respond_to(:schedule)
        end
      end
    end
    
        it 'interpolates jsonpath expressions between matching <>'s' do
      expect(Utils.interpolate_jsonpaths('hello <$.there.world> this <escape works>', payload)).to eq('hello WORLD this should+work')
    end
    
      describe 'helpers' do
    it 'should generate a correct request options hash' do
      expect(@checker.send(:request_options)).to eq({headers: {'User-Agent' => 'Huginn - https://github.com/huginn/huginn', 'Authorization' => 'Bearer '1234token''}})
    end
    
        def at_css(*args)
      doc.at_css(*args)
    end
    
        def initialize
      @pages = {}
    end
    
        class RateLimiter
      attr_accessor :limit
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
            # Remove examples
        css('.runnable-example').each do |node|
          node.parent.remove
        end
    
    module Devise
  module Models
    class MissingAttribute < StandardError
      def initialize(attributes)
        @attributes = attributes
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        private
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end
    
        def define_query
      name = @name
      @klass.send :define_method, '#{@name}?' do
        send(name).file?
      end
    end
    
        # Returns the fingerprint of the instance.
    def fingerprint attachment, style_name
      attachment.fingerprint
    end