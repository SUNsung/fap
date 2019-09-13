
        
        def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
    require 'benchmark/ips'
require 'pathutil'
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
        alias log puts
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
          it 'returns false' do
        expect(node.pure?).to be(false)
      end
    end
    
        context 'with a multi-expression body' do
      let(:source) do
        'class << self; bar; baz; end'
      end
    
              node.values.find do |v|
            heredoc = extract_heredoc(v)
            return heredoc if heredoc
          end
        end
    
            def on_send(node)
          return unless node.arguments? && node.parenthesized?
    
            def offense_location(node)
          if node.loc.respond_to?(:end) && node.loc.end
            :end
          else
            :expression
          end
        end
      end
    end
  end
end

    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
    # Silence locale validation warning
require 'i18n'
I18n.enforce_available_locales = false
    
        assert_no_match /Edit Page/,             last_response.body, ''Edit Page' link not blocked in compare template'
    assert_no_match /Revert Changes/,        last_response.body, ''Revert Changes' link not blocked in compare template'
  end
    
          private
    
          def gateway_options
        order.reload
        gateway_options_class.new(self).to_hash
      end
    
        alias get get_preference
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def void
          perform_payment_action(:void_transaction)
        end
    
            def destroy
          authorize! :destroy, @product_property
          @product_property.destroy
          respond_with(@product_property, status: 204)
        end
    
        initialize_with { Tmuxinator::Project.load(file) }
  end
end

    
        it 'joins array using ;' do
      expect(project.send('hook_#{hook_name}')).
        to eq('echo 'on hook'; echo 'another command here'')
    end
  end
end
    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end
    
        context 'without project yml' do
      let(:expected) { '#{directory}/new-project.yml' }
      it 'gets the project as path to the yml file' do
        expect(described_class.project('new-project')).to eq expected
      end
    end
  end