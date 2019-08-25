
        
            SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        def at_css(*args)
      doc.at_css(*args)
    end
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
        def initialize
      @pages = {}
    end
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
    module Docs
  class Scraper < Doc
    class << self
      attr_accessor :base_url, :root_path, :initial_paths, :options, :html_filters, :text_filters, :stubs
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
      # Helper for use after calling send_*_instructions methods on a resource.
  # If we are in paranoid mode, we always act as if the resource was valid
  # and instructions were sent.
  def successfully_sent?(resource)
    notice = if Devise.paranoid
      resource.errors.clear
      :send_paranoid_instructions
    elsif resource.errors.empty?
      :send_instructions
    end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
          attr_reader :scope_name, :resource
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
        context 'when iteration is nil' do
      before do
        subject.iteration = nil
      end
    
      describe '#maintainer' do
    require 'socket'
    default_maintainer = '<#{ENV['USER']}@#{Socket.gethostname}>'
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, default_maintainer
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
      private
    
      # Take a flat package as input
  def input(input_path)
    # TODO: Fail if it's a Distribution pkg or old-fashioned
    expand_dir = File.join(build_path, 'expand')
    # expand_dir must not already exist for pkgutil --expand
    safesystem('pkgutil --expand #{input_path} #{expand_dir}')
    
      option '--user', 'USER',
    'Set the user to USER in the prototype files.',
    :default => 'root'
    
          File.open(File.join(builddir, 'manifests', manifest), 'w') do |f|
        logger.info('manifest: #{f.path}')
        template = template(File.join('puppet', '#{manifest}.erb'))
        ::Dir.chdir(fileroot) do
          f.puts template.result(binding)
        end
      end
    end
  end # def generate_specfile
    
    # TODO(sissel): Add dependency checking support.
# IIRC this has to be done as a 'checkinstall' step.
class FPM::Package::Solaris < FPM::Package