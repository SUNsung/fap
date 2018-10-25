
        
            def desc(string)
      desc_collection << string
    end
    
            tag = options[:tag] || '#{options[:grouping]}/#{lane_name}/#{options[:prefix]}#{options[:build_number]}#{options[:postfix]}'
        message = options[:message] || '#{tag} (fastlane)'
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
          it 'works with select regex' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /AppDelegate/
            )
          end').runner.execute(:test)
    
            context 'when slather version is 2.4.1' do
          let(:version) { '2.4.1' }
          it 'configuration option is available' do
            expect(action.configuration_available?).to be_truthy
          end
        end
    
        it 'recognizes an array as the only element of a command' do
      command = command_from_args(['/usr/local/bin/git', 'git'])
      expect(command).to eq('/usr/local/bin/git')
    end
    
        def doc_default_value
      return '[*](#parameters-legend-dynamic)' if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '`''`' if self.default_value.instance_of?(String) && self.default_value.empty?
      return '`:#{self.default_value}`' if self.default_value.instance_of?(Symbol)
    
              it 'returns the default values' do
            @config = FastlaneCore::Configuration.create(@options, {}) # no user inputs
            values = @config.values
            expect(values[:cert_name]).to eq('production_default')
            expect(values[:output]).to eq('.')
            expect(values[:wait_processing_interval]).to eq(30)
          end
        end
    
              def nonzero?
            @path.exclude?('\0')
          end
    
            class << self
          def from_image(job)
            image = Gitlab::Ci::Build::Image.new(job.options[:image])
            return unless image.valid?
    
            # This unregisters a plugin so that its components will no longer
        # be used. Note that this should only be used for testing purposes.
        def unregister(plugin)
          if @registered.include?(plugin)
            @logger.info('Unregistered: #{plugin.name}')
            @registered.delete(plugin)
          end
        end
      end
    end
  end
end

    
    require 'log4r'
    
    module Admin
  class ConfirmationsController < BaseController
    before_action :set_user
    before_action :check_confirmation, only: [:resend]
    
        def index
      authorize :email_domain_block, :index?
      @email_domain_blocks = EmailDomainBlock.page(params[:page])
    end
    
        def filter_params
      params.permit(
        :domain_name
      )
    end
  end
end

    
    module Admin
  class ReportNotesController < BaseController
    before_action :set_report_note, only: [:destroy]
    
    class Api::SubscriptionsController < Api::BaseController
  before_action :set_account
  respond_to :txt
    
      it 'is a private method' do
    Kernel.should have_private_instance_method(:warn)
  end
    
        def parse_debug_directive(parent, line, root, value, offset)
      raise SyntaxError.new('Invalid debug directive '@debug': expected expression.') unless value
      raise SyntaxError.new('Illegal nesting: Nothing may be nested beneath debug directives.',
        :line => @line + 1) unless line.children.empty?
      offset = line.offset + line.text.index(value).to_i
      Tree::DebugNode.new(parse_script(value, :offset => offset))
    end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
            def extra_space(hash_node)
          {
            newlines: extra_left_space?(hash_node) &&
              extra_right_space?(hash_node),
            left: extra_left_space?(hash_node),
            right: extra_right_space?(hash_node)
          }
        end
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is truthy.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the truthy branch node of the `if` node
      # @return [nil] if the truthy branch is empty
      def if_branch
        node_parts[1]
      end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def option_type_params
          params.require(:option_type).permit(permitted_option_type_attributes)
        end
      end
    end
  end
end

    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :read)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :read).load
                     end
        end
    
            def capture
          perform_payment_action(:capture)
        end
    
            def find_product
          super(params[:id])
        end
    
              respond_with(@shipment, default_template: :show)
        end