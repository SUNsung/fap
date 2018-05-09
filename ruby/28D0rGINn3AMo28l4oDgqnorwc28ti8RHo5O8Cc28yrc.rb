    private
    
    module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
          # Instead of letting Clamp set up accessors for the options
      # weŕe going to tightly controlling them through
      # LogStash::SETTINGS
      def define_simple_writer_for(option, &block)
        LogStash::SETTINGS.get(option.attribute_name)
        define_method(option.write_method) do |value|
          value = instance_exec(value, &block) if block
          LogStash::SETTINGS.set_value(option.attribute_name, value)
        end
      end