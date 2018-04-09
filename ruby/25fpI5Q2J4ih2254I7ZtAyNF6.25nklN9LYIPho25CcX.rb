
        
          class FeatureTopicUsers < Jobs::Base
    
      class CachedFragment
    def initialize(json)
      @json = json
    end
    def as_json(*_args)
      @json
    end
  end
    
            entries
      end
    
              node.css('.method').each do |n|
            next unless n.at_css('dt[id]')
            name = n.at_css('.descname').content
            name = '#{class_name}::#{name}()'
            id = n.at_css('dt[id]')['id']
            entries << [name, id]
          end
        end
    
            css('.method-name', '.property-name').each do |node|
          source = node.at_css('a')
          source.before(%(<span class='name'>#{source.content}</span>))
          source.content = 'source'
          source['class'] = 'source'
        end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
              FROZEN_STRING_LITERAL_TYPES.include?(node.type) &&
            frozen_string_literals_enabled?
        end
      end
    end
  end
end

    
            attr_reader :lines, :annotations
      end
    end
  end
end

    
        expect(cop.offenses.size).to eq(1)
    expect(cop.messages).to eq(['Prefer `to_sym` over `intern`.'])
    expect(cop.highlights).to eq(%w[intern])