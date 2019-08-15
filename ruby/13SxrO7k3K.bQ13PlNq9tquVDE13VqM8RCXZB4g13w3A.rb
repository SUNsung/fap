
        
              def tag
        MacOS.cat
      end
    end
    
    module OS
  module Mac
    class Version < ::Version
      SYMBOLS = {
        catalina:    '10.15',
        mojave:      '10.14',
        high_sierra: '10.13',
        sierra:      '10.12',
        el_capitan:  '10.11',
        yosemite:    '10.10',
        mavericks:   '10.9',
      }.freeze
    
          if create && !path.directory?
        odebug 'Creating metadata directory #{path}.'
        path.mkpath
      end
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
    Then(/^the task fails$/) do
  expect(@success).to be_falsey
end
    
    Given(/^an invalid release named '(.+)'$/) do |filename|
  run_vagrant_command('mkdir -p #{TestApp.release_path(filename)}')
end

    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
                  <% if frame.post_context %>
              <ol start='<%=h frame.lineno + 1 %>' class='post-context'
                  id='post-<%= id %>' onclick='toggle(<%= id %>);'>
                <% frame.post_context.each do |line| %>
                <li class='post-context-line'><code><%=h line %></code></li>
                <% end %>
              </ol>
              <% end %>
              <div class='clear'></div>
            </li>
    
          def react_and_close(env, body)
        reaction = react(env)
    
      context 'given a distribution without a META.* file' do
    it 'should package IPC::Session' do
      pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
        context 'and :python_fix_dependencies? is false' do
      before :each do
        subject.attributes[:python_fix_dependencies?] = false
      end
    
          if !attributes[:python_install_data].nil?
        flags += [ '--install-data', File.join(prefix, attributes[:python_install_data]) ]
      elsif !attributes[:prefix].nil?
        # prefix given, but not python_install_data, assume PREFIX/data
        flags += [ '--install-data', File.join(prefix, 'data') ]
      end
    
        Thank you for installing tmuxinator.
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
      describe '#validate' do
    let(:default) { described_class::LOCAL_DEFAULT }