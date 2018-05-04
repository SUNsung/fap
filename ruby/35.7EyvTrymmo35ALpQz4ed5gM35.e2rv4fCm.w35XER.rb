
        
                expect(result).to eq('hg parent --template {rev}')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template {rev}')
      end
    end
  end
end

    
          it 'properly removes new lines of the build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: '24\n', xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
        res << inp.to_html
  end
  res << '</form>'
end
    
    	def initialize(filename)
		unless filename.empty?
			self.file = File.new(filename)
		else
			self.file = STDIN
		end
    
            def nested_comparison?(node)
          if node.or_type?
            node.node_parts.all? { |node_part| comparison? node_part }
          else
            false
          end
        end
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
        def delete(name, **opts)
      options = opts.merge(value: 'deleted', expires: Time.at(0))
      self.[]=(name, options)
    end
  end
end

    
    module Grape
  module DSL
    module Validations
      extend ActiveSupport::Concern
    
            def strict_version_vendor_accept_header_presence_check
          return unless versions.present?
          return if an_accept_header_with_version_and_vendor_is_present?
          fail_with_invalid_accept_header!('API vendor or version not found.')
        end