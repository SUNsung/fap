
        
          before(:each) do
    # This value needs to be set or our event fixtures will not match
    allow(FastlaneCore::Helper).to receive(:ci?).and_return(false)
    allow(FastlaneCore::Helper).to receive(:operating_system).and_return('macOS')
  end
    
          it 'can be set to multiple the platforms' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'iOS,Mac'
            )
          end').runner.execute(:test)
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is falsey.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the falsey branch node of the `if` node
      # @return [nil] when there is no else branch
      def else_branch
        node_parts[2]
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end

    
    Given /^I comment out lines that contain '([^']+)' in '([^']+)'$/ do |contains, glob|
  cd('.') do
    Dir.glob(glob).each do |file|
      transform_file(file) do |content|
        content.gsub(/^(.*?#{contains}.*?)$/) { |line| '# #{line}' }
      end
    end
  end
end
    
    When /^(?:|I )uncheck '([^']*)'$/ do |field|
  uncheck(field)
end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end