
        
          Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
          def additional_entries
        entries = []
    
      def test_conflicting_encodings
    Dir.mktmpdir(__method__.to_s) do |tmpdir|
      tmp = File.join(tmpdir, 'x')
      File.open(tmp, 'wb', :encoding => Encoding::EUC_JP) do |x|
        assert_equal Encoding::EUC_JP, x.external_encoding
      end
    end
  end
    
      class SubclassX
    attr_reader :key
    def initialize(*)
      @key = :value
      super
    end
  end
end

    
            def update
          authorize! :update, @order, order_token
          @address = find_address