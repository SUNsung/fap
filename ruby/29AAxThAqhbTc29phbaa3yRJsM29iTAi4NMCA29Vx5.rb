
        
              # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
          def title
        'Home'
      end
    
        assert_no_match /Edit Page/,             last_response.body, ''Edit Page' link not blocked in compare template'
    assert_no_match /Revert Changes/,        last_response.body, ''Revert Changes' link not blocked in compare template'
  end
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end