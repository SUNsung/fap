
        
          def self.all_versions
    all.flat_map(&:versions)
  end
    
          def inherited(subclass)
        subclass.type = type
      end
    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
    class FiltersController < ApplicationController
  include Authorization
    
      def next_page
    account_outbox_url(@account, page: true, max_id: @statuses.last.id) if @statuses.size == LIMIT
  end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
      def payload
    @_payload ||= request.body.read
  end
    
        def URIAddEncodedOctetToBuffer(octet, result, index)
      result[index] = 37; # Char code of '%'.
      index         += 1
      result[index] = @@hexCharCodeArray[octet >> 4];
      index         += 1
      result[index] = @@hexCharCodeArray[octet & 0x0F];
      index += 1
      return index;
    end
    
    module Precious
  module Views
    class Layout < Mustache
      include Rack::Utils
      alias_method :h, :escape_html
    
      test 'redirects from 'base_path' or 'base_path/' to 'base_path/Home'' do
    Precious::App.set(:wiki_options, {})
    get '/'
    assert_match 'http://example.org/Home', last_response.headers['Location']
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
                  expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                        '#{b}#{close}',
                                        suffix].join($RS))
            end
          end
        end
      end
    end
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
          # Checks whether the `if` node has at least one `elsif` branch. Returns
      # true if this `if` node itself is an `elsif`.
      #
      # @return [Boolean] whether the `if` node has at least one `elsif` branch
      def elsif_conditional?
        else_branch && else_branch.if_type? && else_branch.elsif?
      end
    
            def line_item_params
          params.require(:line_item).permit(:quantity, :variant_id, options: line_item_options)
        end
      end
    end
  end
end

    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def payment_params
          params.require(:payment).permit(permitted_payment_attributes)
        end
      end
    end
  end
end

    
            def product_property
          if @product
            @product_property ||= @product.product_properties.find_by(id: params[:id])
            @product_property ||= @product.product_properties.includes(:property).where(spree_properties: { name: params[:id] }).first
            raise ActiveRecord::RecordNotFound unless @product_property
            authorize! :read, @product_property
          end
        end