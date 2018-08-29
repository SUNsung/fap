
        
        def liquid_escape(markdown)
  markdown.gsub(%r!(`{[{%].+[}%]}`)!, '{% raw %}\\1{% endraw %}')
end
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    Correctness.new(site_docs, 'redirect_from'.freeze).assert!
Correctness.new(site_docs, 'title'.freeze).assert!
    
    Then(%r!^I should see date '(.*)' in '(.*)' if on Windows$!) do |text, file|
  step %(the '#{file}' file should exist)
  regexp = Regexp.new(text)
  if Jekyll::Utils::Platforms.really_windows? && !dst_active?
    expect(file_contents(file)).to match regexp
  else
    expect(file_contents(file)).not_to match regexp
  end
end
    
          def background_name(keyword, name, source_line, indent)
        print_feature_element_name(
          keyword, name, source_line, indent
        )
      end
    
    def run_rubygem(args)
  run_in_shell('gem', *args.strip.split(' '))
end
    
                c.option 'config', '--config CONFIG_FILE[,CONFIG_FILE2,...]', Array,
                     'Custom configuration file'
    
            next unless path.file?
        file = path
    
        raise SEARCH_ERROR_QUEUE.pop unless SEARCH_ERROR_QUEUE.empty?
  end
    
      let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }
    
            expect(cop.offenses.size).to eq(1)
        expect(cop.highlights).to eq([close])
        expect(cop.messages).to eq([described_class::SAME_LINE_MESSAGE])
      end
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end