
        
        html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
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

    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end
    
            def should_be_unused?
          name.to_s.start_with?('_')
        end
    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end
    
                  add_offense(condition)
            end
    
              annotated_source.each_line do |source_line|
            if source_line =~ ANNOTATION_PATTERN
              annotations << [source.size, source_line]
            else
              source << source_line
            end
          end
    
        expect(cop.offenses.size).to eq(1)
    expect(cop.messages).to eq(['Prefer `to_sym` over `intern`.'])
    expect(cop.highlights).to eq(%w[intern])
    
          it 'autocorrects the offenses' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq(<<-RUBY.strip_indent)
          #{type} Parent
            #{type} SomeObject
              URL = %q(http://example.com)
              WSDL = %q(http://example.com/wsdl)