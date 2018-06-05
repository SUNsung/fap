
        
        class U2fRegistration < ActiveRecord::Base
  belongs_to :user
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
      def human?
    params.has_key?('human') && (params['human'].nil? || as_boolean(params['human']) == true)
  end
end

    
          # Only print require() calls that did actual work.
      # require() returns true on load, false if already loaded.
      if result
        source = caller[0]
        #p source.include?('/lib/polyglot.rb:63:in `require'') => source
        if source.include?('/lib/polyglot.rb:63:in `require'')
          source = caller[1]
        end