
        
                  def placeholder_required?(html_options)
            # See https://html.spec.whatwg.org/multipage/forms.html#attr-select-required
            html_options['required'] && !html_options['multiple'] && html_options.fetch('size', 1).to_i == 1
          end
    
            def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
              def datetime_selector(options, html_options)
            datetime = options.fetch(:selected) { value || default_datetime(options) }
            @auto_index ||= nil
    
          # This module is mixed in if layout conditions are provided. This means
      # that if no layout conditions are used, this method is not used
      module LayoutConditions # :nodoc:
        private
    
      it 'returns true when the command exits with a zero exit status' do
    @object.system(ruby_cmd('exit 0')).should == true
    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
      it 'hooks assignments to a global variable' do
    captured = nil
    
    group :development do
  cp_gem 'claide',                'CLAide'
  cp_gem 'cocoapods-core',        'Core'
  cp_gem 'cocoapods-deintegrate', 'cocoapods-deintegrate'
  cp_gem 'cocoapods-downloader',  'cocoapods-downloader'
  cp_gem 'cocoapods-plugins',     'cocoapods-plugins'
  cp_gem 'cocoapods-search',      'cocoapods-search'
  cp_gem 'cocoapods-stats',       'cocoapods-stats'
  cp_gem 'cocoapods-trunk',       'cocoapods-trunk'
  cp_gem 'cocoapods-try',         'cocoapods-try'
  cp_gem 'molinillo',             'Molinillo'
  cp_gem 'nanaimo',               'Nanaimo'
  cp_gem 'xcodeproj',             'Xcodeproj'
    
        it 'displays the nickname if no name, first, or last is available' do
      subject.info.name = nil
      %w[first_name last_name].each { |k| subject.info[k] = nil }
      expect(subject.info.name).to eq('meatbag')
    end
    
    task :default => %i[spec rubocop]
    
      SimpleCov.formatters = [
    SimpleCov::Formatter::HTMLFormatter,
    Coveralls::SimpleCov::Formatter
  ]