
        
            def errors(self):
        return mark_safe(
            '\n'.join(
                self.form[f].errors.as_ul() for f in self.fields if f not in self.readonly_fields
            ).strip('\n')
        )
    
            # Type-based geometries.
        # TODO: Support 'M' extension.
        if f.dim == 3:
            geom_type = f.geom_type + 'Z'
        else:
            geom_type = f.geom_type
        if f.geography:
            if f.srid != 4326:
                raise NotSupportedError('PostGIS only supports geography columns with an SRID of 4326.')
    
        def check_supported(self, schema_editor):
        if self.autosummarize and not schema_editor.connection.features.has_brin_autosummarize:
            raise NotSupportedError('BRIN option autosummarize requires PostgreSQL 10+.')
    
    
# OFTDate, OFTTime, OFTDateTime fields.
class OFTDate(Field):
    @property
    def value(self):
        'Return a Python `date` object for the OFTDate field.'
        try:
            yy, mm, dd, hh, mn, ss, tz = self.as_datetime()
            return date(yy.value, mm.value, dd.value)
        except (TypeError, ValueError, GDALException):
            return None
    
        def _make_feature(self, feat_id):
        '''
        Helper routine for __getitem__ that constructs a Feature from the given
        Feature ID.  If the OGR Layer does not support random-access reading,
        then each feature of the layer will be incremented through until the
        a Feature is found matching the given feature ID.
        '''
        if self._random_read:
            # If the Layer supports random reading, return.
            try:
                return Feature(capi.get_feature(self.ptr, feat_id), self)
            except GDALException:
                pass
        else:
            # Random access isn't supported, have to increment through
            # each feature until the given feature ID is encountered.
            for feat in self:
                if feat.fid == feat_id:
                    return feat
        # Should have returned a Feature, raise an IndexError.
        raise IndexError('Invalid feature id: %s.' % feat_id)
    
            For empty bands (where all pixel values are nodata), all statistics
        values are returned as None.
    
            with self.assertRaisesRegex(SyntaxError, 'cannot use named assignment with tuple'):
            exec(code, {}, {})
    
        def close(self):
        '''Close the connection without assuming anything about it.'''
        try:
            file = self.file
            self.file = None
            if file is not None:
                file.close()
        finally:
            sock = self.sock
            self.sock = None
            if sock is not None:
                sock.close()
    
    class PyQueueTest(QueueTest, unittest.TestCase):
    queue = py_queue
    
            # RFC 2387
        'related': (
            (0, 1, None),
            (2,),
            (1, 2),
            textwrap.dedent('''\
                To: foo@example.com
                MIME-Version: 1.0
                Content-Type: multipart/related; boundary='==='; type=text/html
    
        def __init__(self, raw, buffer_size=DEFAULT_BUFFER_SIZE):
        '''Create a new buffered reader using the given readable raw IO object.
        '''
        if not raw.readable():
            raise OSError(''raw' argument must be readable.')
    
    try:
    xrange
except NameError:
    xrange = range
    
        logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
    The command-line wrapper and Application debug modes can be used together.
This combination is encouraged as the wrapper catches syntax errors and
other import-time failures, while debug mode catches changes once
the server has started.
    
    '''
Copyright (c) 2006-2019 sqlmap developers (http://sqlmap.org/)
See the file 'LICENSE' for copying permission
'''
    
    from lib.core.agent import agent
from lib.core.common import arrayizeValue
from lib.core.common import Backend
from lib.core.common import filterPairValues
from lib.core.common import getLimitRange
from lib.core.common import isAdminFromPrivileges
from lib.core.common import isInferenceAvailable
from lib.core.common import isNoneValue
from lib.core.common import isNullValue
from lib.core.common import isNumPosStrValue
from lib.core.common import isTechniqueAvailable
from lib.core.common import parsePasswordHash
from lib.core.common import readInput
from lib.core.common import unArrayizeValue
from lib.core.compat import xrange
from lib.core.convert import encodeHex
from lib.core.convert import getUnicode
from lib.core.data import conf
from lib.core.data import kb
from lib.core.data import logger
from lib.core.data import queries
from lib.core.dicts import DB2_PRIVS
from lib.core.dicts import FIREBIRD_PRIVS
from lib.core.dicts import INFORMIX_PRIVS
from lib.core.dicts import MYSQL_PRIVS
from lib.core.dicts import PGSQL_PRIVS
from lib.core.enums import CHARSET_TYPE
from lib.core.enums import DBMS
from lib.core.enums import EXPECTED
from lib.core.enums import PAYLOAD
from lib.core.exception import SqlmapNoneDataException
from lib.core.exception import SqlmapUserQuitException
from lib.core.threads import getCurrentThreadData
from lib.request import inject
from lib.utils.hash import attackCachedUsersPasswords
from lib.utils.hash import storeHashesToFile
from lib.utils.pivotdumptable import pivotDumpTable
from thirdparty.six.moves import zip as _zip
    
    def configFileParser(configFile):
    '''
    Parse configuration file and save settings into the configuration
    advanced dictionary.
    '''
    
        def getHostname(self):
        warnMsg = 'on Microsoft Access it is not possible to enumerate the hostname'
        logger.warn(warnMsg)
    
        def getStatements(self):
        warnMsg = 'on DB2 it is not possible to enumerate the SQL statements'
        logger.warn(warnMsg)
    
    '''
Copyright (c) 2006-2019 sqlmap developers (http://sqlmap.org/)
See the file 'LICENSE' for copying permission
'''
    
    import pytest
import os
import ctypes
from pathlib import Path
from spacy import util
from spacy import prefer_gpu, require_gpu
from spacy.compat import symlink_to, symlink_remove, path2str, is_windows
from spacy._ml import PrecomputableAffine
from subprocess import CalledProcessError
    
        DOCS: https://spacy.io/api/top-level#displacy.render
    USAGE: https://spacy.io/usage/visualizers
    '''
    factories = {
        'dep': (DependencyRenderer, parse_deps),
        'ent': (EntityRenderer, parse_ents),
    }
    if style not in factories:
        raise ValueError(Errors.E087.format(style=style))
    if isinstance(docs, (Doc, Span, dict)):
        docs = [docs]
    docs = [obj if not isinstance(obj, Span) else obj.as_doc() for obj in docs]
    if not all(isinstance(obj, (Doc, Span, dict)) for obj in docs):
        raise ValueError(Errors.E096)
    renderer, converter = factories[style]
    renderer = renderer(options=options)
    parsed = [converter(doc, options) for doc in docs] if not manual else docs
    _html['parsed'] = renderer.render(parsed, page=page, minify=minify).strip()
    html = _html['parsed']
    if RENDER_WRAPPER is not None:
        html = RENDER_WRAPPER(html)
    if jupyter or (jupyter is None and is_in_jupyter()):
        # return HTML rendered by IPython display()
        from IPython.core.display import display, HTML
    
    import spacy
import spacy.util
from spacy.tokens import Token, Doc
from spacy.gold import GoldParse
from spacy.syntax.nonproj import projectivize
from collections import defaultdict, Counter
from timeit import default_timer as timer
from spacy.matcher import Matcher
    
        # save model to output directory
    if output_dir is not None:
        output_dir = Path(output_dir)
        if not output_dir.exists():
            output_dir.mkdir()
        nlp.to_disk(output_dir)
        print('Saved model to', output_dir)