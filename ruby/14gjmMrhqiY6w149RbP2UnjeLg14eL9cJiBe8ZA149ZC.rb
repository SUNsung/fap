
        
              if @report_note.save
        if params[:create_and_resolve]
          @report.resolve!(current_account)
          log_action :resolve, @report
    
        data = {
      alerts: {
        follow: alerts_enabled,
        favourite: alerts_enabled,
        reblog: alerts_enabled,
        mention: alerts_enabled,
      },
    }
    
        render_empty
  end
    
      def default_locale
    if ENV['DEFAULT_LOCALE'].present?
      I18n.default_locale
    else
      request_locale || I18n.default_locale
    end
  end
    
    module SessionTrackingConcern
  extend ActiveSupport::Concern
    
    
    {
    {
    {
    {
    {
    {
    {
    {
    {
    {
    {
    {  def test_vi_end_word
    input_keys('aaa   b{b}}}b   ccc\C-[0')
    assert_byte_pointer_size('')
    assert_cursor(0)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aa')
    assert_cursor(2)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   ')
    assert_cursor(6)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b')
    assert_cursor(7)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{')
    assert_cursor(8)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}')
    assert_cursor(11)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}}')
    assert_cursor(12)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}}b   cc')
    assert_cursor(18)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}}b   cc')
    assert_cursor(18)
    assert_cursor_max(19)
    input_keys('03e')
    assert_byte_pointer_size('aaa   b')
    assert_cursor(7)
    assert_cursor_max(19)
    input_keys('3e')
    assert_byte_pointer_size('aaa   b{b}}}')
    assert_cursor(12)
    assert_cursor_max(19)
    input_keys('3e')
    assert_byte_pointer_size('aaa   b{b}}}b   cc')
    assert_cursor(18)
    assert_cursor_max(19)
  end
    
              workspace = eval(code, binding, f.path)
          assert_equal(<<~EOS, without_term { workspace.code_around_binding })
    
    def clamp(f)
  i = f * 255.5
  if i > 255.0 then
    i = 255.0
  end
  if i < 0.0 then
    i = 0.0
  end
  i.to_i
end
    
      # Output this package to the given path.
  def output(path)
    raise NotImplementedError.new('#{self.class.name} does not yet support ' \
                                  'creating #{self.type} packages')
  end # def output
    
      def output(output_path)
    
    # Fixup the category to an acceptable solaris category
    case @category
    when nil, 'default'
      @category = 'Applications/System Utilities'
    end
    
    # A pleaserun package.
#
# This does not currently support 'output'
class FPM::Package::PleaseRun < FPM::Package
  # TODO(sissel): Implement flags.
    
    FactoryBot.find_definitions
    
        context 'command is a hash' do
      before do
        yaml['editor'] = { 'layout' => 'main-horizontal', 'panes' => [nil] }
      end
    
        it 'checks requirements' do
      expect(Tmuxinator::Doctor).to receive(:installed?)
      expect(Tmuxinator::Doctor).to receive(:editor?)
      expect(Tmuxinator::Doctor).to receive(:shell?)
      capture_io { cli.start }
    end
  end
    
        def deprecation_checks
      [
        rvm_or_rbenv?,
        tabs?,
        cli_args?,
        legacy_synchronize?,
        pre?,
        post?
      ]
    end
    
      before { instance.extend Tmuxinator::WemuxSupport }
    
      s.files         = Dir['lib/**/*', 'spec/**/*', 'bin/*', 'completion/*']
  s.executables   = s.files.grep(%r{^bin/}) { |f| File.basename(f) }
  s.test_files    = s.files.grep(%r{^(test|spec|features)/})
  s.require_paths = ['lib']
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'margin: 1px'
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      ruleset = 'position: fixed; ' +
                'top: 1em; ' +
                'right: 1em; ' +
                'bottom: 1em; ' +
                'left: 1em;'