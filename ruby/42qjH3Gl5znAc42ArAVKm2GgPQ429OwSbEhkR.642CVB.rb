
        
                  def checked?(value)
            case value
            when TrueClass, FalseClass
              value == !!@checked_value
            when NilClass
              false
            when String
              value == @checked_value
            else
              if value.respond_to?(:include?)
                value.include?(@checked_value)
              else
                value.to_i == @checked_value.to_i
              end
            end
          end
    
                @template_object.label(@object_name, @sanitized_attribute_name, @text, html_options, &block)
          end
        end
    
          def self.symbols
        type_klass::SET.symbols
      end
    end
  end
end

    
      def test_future
    [
      [3000, 1, 1, 0, 0, 0],
      [4000, 1, 1, 0, 0, 0],
      [1 << 100, 1, 1, 0, 0, 0],
    ].each {|year, mon, day, hour, min, sec|
      t = Time.utc(year, mon, day, hour, min, sec)
      assert_equal(year, t.year)
      assert_equal(mon, t.mon)
      assert_equal(day, t.day)
      assert_equal(hour, t.hour)
      assert_equal(min, t.min)
      assert_equal(sec, t.sec)
    }
  end
    
    a = *[]; test_ok(a == [])
a = *[1]; test_ok(a == [1])
a = *[nil]; test_ok(a == [nil])
a = *[[]]; test_ok(a == [[]])
a = *[1,2]; test_ok(a == [1,2])
a = *[*[]]; test_ok(a == [])
a = *[*[1]]; test_ok(a == [1])
a = *[*[1,2]]; test_ok(a == [1,2])
    
          def preference_field_options(options)
        field_options = case options[:type]
                        when :integer
                          {
                            size: 10,
                            class: 'input_integer form-control'
                          }
                        when :boolean
                          {}
                        when :string
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        when :password
                          {
                            size: 10,
                            class: 'password_string form-control'
                          }
                        when :text
                          {
                            rows: 15,
                            cols: 85,
                            class: 'form-control'
                          }
                        else
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        end
    
              def spree_current_order
            @spree_current_order ||= find_spree_current_order
          end
    
          def required_fields_for(model)
        required_fields = model._validators.select do |_field, validations|
          validations.any? { |v| v.is_a?(ActiveModel::Validations::PresenceValidator) }
        end.map(&:first) # get fields that are invalid
        # Permalinks presence is validated, but are really automatically generated
        # Therefore we shouldn't tell API clients that they MUST send one through
        required_fields.map!(&:to_s).delete('permalink')
        # Do not require slugs, either
        required_fields.delete('slug')
        required_fields
      end