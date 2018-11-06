
        
            initializer 'action_view.finalize_compiled_template_methods' do |app|
      ActiveSupport.on_load(:action_view) do
        ActionView::Template.finalize_compiled_template_methods =
          app.config.action_view.delete(:finalize_compiled_template_methods)
      end
    end
    
          def extract_details(options) # :doc:
        @lookup_context.registered_details.each_with_object({}) do |key, details|
          value = options[key]
    
      describe '#yes_no' do
    it 'returns a label 'Yes' if any truthy value is given' do
      [true, Object.new].each { |value|
        label = yes_no(value)
        expect(label).to be_html_safe
        expect(Nokogiri(label).text).to eq 'Yes'
      }
    end
    
        it 'html_safes the output unless :skip_safe is passed in' do
      expect(Utils.jsonify({:foo => 'bar'})).to be_html_safe
      expect(Utils.jsonify({:foo => 'bar'}, :skip_safe => false)).to be_html_safe
      expect(Utils.jsonify({:foo => 'bar'}, :skip_safe => true)).not_to be_html_safe
    end
  end
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end