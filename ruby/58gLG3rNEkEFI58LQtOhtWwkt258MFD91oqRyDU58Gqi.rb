
        
          it 'should not override the header if already set' do
    mock_app with_headers('X-XSS-Protection' => '0')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-XSS-Protection']).to eq('0')
  end
    
      # rspec-expectations config goes here. You can use an alternate
  # assertion/expectation library such as wrong or the stdlib/minitest
  # assertions if you prefer.
  config.expect_with :rspec do |expectations|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://myronmars.to/n/dev-blog/2012/06/rspecs-new-expectation-syntax
    expectations.syntax = :expect
  end
    
        def initialize(filepath)
      @filepath = filepath
    end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end